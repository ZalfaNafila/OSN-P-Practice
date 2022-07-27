//ZalfaNafil C++
//https://codeforces.com/problemset/problem/20/B

#include <bits/stdc++.h>
using namespace std;
#define hi ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#include <cctype>
#include<iomanip>

int main(){
    hi
    double a,b,c;
    double root1,root2;
    double ans;
    cin >> a >> b >> c;

    if(a == 0 && b == 0 && c == 0){
        cout << "-1" << endl;
        return 0;
    }
    if(a == 0 && b == 0 && c != 0){
        cout << "0" << endl;
        return 0;
    }
    if(a == 0 && b != 0){
        ans  = (-1.0)*c/b;
        cout << "1" << endl << fixed << setprecision(10) << ans << endl;
        return 0;
    }

double det = b*b - 4*a*c;

    if(det == 0){
        root1 = - 1.0 * b/(2*a);
        cout << "1" << endl << fixed << setprecision(10) << root1 << endl;
    }
    else if(det<0){
        cout << "0" << endl;
    }
    else if(det > 0){
        root1 = (-1.0 * b+sqrt(det))/(2*a);
        root2 = (-1.0 * b-sqrt(det))/(2*a);
        if(root1<root2){
            cout << "2" << endl << fixed << setprecision(10) << root1 << endl <<fixed << setprecision(10) << root2 << endl;
        }
        else
            cout << "2" << endl << fixed << setprecision(10) << root2 << endl <<fixed << setprecision(10) << root1 << endl;
}

}
