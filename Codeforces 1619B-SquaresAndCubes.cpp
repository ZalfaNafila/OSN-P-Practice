#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define hi ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#include <cctype>
#define ll long long

int main(){
	hi
    ll n,a;
    cin >> n;
    while(n--){
        set<ll>sum;
        cin >> a;
        for(int i=1; i*i<=a; i ++){
            sum.insert(i*i);
        }
        for(int j = 1; pow(j,3) <= a; j++){
            sum.insert(pow(j,3));
        }
        cout << sum.size() << endl;
    }
}
