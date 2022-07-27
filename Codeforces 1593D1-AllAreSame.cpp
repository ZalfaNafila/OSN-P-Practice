//https://codeforces.com/contest/1593/problem/D1
//zalfaaa

#include <bits/stdc++.h>
using namespace std;
#define hi ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#include <cctype>
#include <math.h>

int main(){
	hi
    int n;
    cin >> n;
    for(int j = 1; j<=n; j++){
        int ans = 0;
        int a;
        cin >> a;
        int arr[a+10];
        for(int i = 1; i<=a; i++){
            cin >> arr[i];
        }
        sort(arr+1,arr+1+a);
        if(arr[1] == arr[a]){
            cout << "-1" << endl;
            continue;
            }
        for(int k = 1; k<=a; k++){
            ans =__gcd(ans,arr[k]-arr[1]);
        }
        cout << ans << endl;
    }
}
