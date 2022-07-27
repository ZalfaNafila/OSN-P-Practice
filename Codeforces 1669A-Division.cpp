//ZalfaNafila C++

#include <bits/stdc++.h>
using namespace std;
#define hi ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){
    hi
    int n,t;
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> t;
        if(t >= 1900){
        cout << "Division 1" << endl;
    }
    else if(t >= 1600 && t<= 1899){
        cout << "Division 2" << endl;
    }
    else if(t>= 1400 && t<=1599){
        cout << "Division 3" << endl;
    }
    else
        cout << "Division 4" << endl;
    }

}
