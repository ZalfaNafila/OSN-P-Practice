//ZalfaNafila C++ 
//https://codeforces.com/problemset/problem/120/C

#include <bits/stdc++.h>
using namespace std;
#define hi ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#include <cctype>

int main(){
//	hi
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    int n,t,a;
    int sum = 0;
    cin >> n >> t;
    for(int i = 1; i<=n; i++){
        cin >> a;
        for(int j = 1; j<=3; j++){
            if(a>= t){
            a-=t;
        }
        }
        sum+=a;
    }
     cout << sum << endl;
}
