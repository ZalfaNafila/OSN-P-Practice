#include <bits/stdc++.h>
using namespace std;
#define hi ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#include <cctype>
#define ll long long

int main(){
	hi
	int t,a,n;
	cin >> t;
	for(int i=1; i<=t; i++){
    cin >> n >> a;
    if(n%a == 0){
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    }

}
