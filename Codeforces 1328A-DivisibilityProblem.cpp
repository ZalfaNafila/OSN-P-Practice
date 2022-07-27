//https://codeforces.com/problemset/problem/1328/A

#include <bits/stdc++.h>
using namespace std;
#define hi ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#include <cctype>
#define ll long long

int main(){
	hi
    int n;
    cin >> n;
    int a,b,mod;
    for(int i = 1; i <= n; i++){
        cin >> a >> b;
        mod = a%b;
        if(mod == 0){
            cout << "0" << endl;
        }
        else
            cout << b - mod << endl;
    }
}
