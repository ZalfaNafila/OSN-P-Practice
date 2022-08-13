#include <bits/stdc++.h>
using namespace std;
#include <math.h>
#include <algorithm>
#define helloo ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

int main(){
	helloo
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(ll i = 0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);

    if(k == 0){
        if(arr[0] > 1) {
            cout << 1 << '\n';
        }
        else{
            cout << -1 << '\n';
        }
    }
    else if(k == n){
        cout << arr[k-1] << '\n';
    }
    else {
        int cnt = 0;
        for(int i=0; i<k+1; i++){
            if(arr[i] <= arr[k-1]) {
                cnt++;
            }
        }
        if(cnt == k){
            cout << arr[k-1] << '\n';
        }
        else cout << -1 << '\n';
    }
}

