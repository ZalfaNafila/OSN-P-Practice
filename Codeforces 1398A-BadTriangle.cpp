//https://codeforces.com/problemset/problem/1398/A
//ZalfaNafila C++

#include <bits/stdc++.h>
using namespace std;
#define hi ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#include <cctype>
#define ll long long

int main(){
	hi
    int t;
    cin >> t;
    for(int i = 1; i<=t; i++){
        bool tri = false;
        int a;
        cin >> a;
        int arr[a];
        for(int j = 0; j<a; j++){
            cin >> arr[j];
        }
        for(int k = 0; k<a; k++){
            if(arr[0] + arr[1] > arr[a-1]){
                tri = true;
            }
            else
                tri = false;
        }
    if(tri == false){
        cout << 1 << " " << 2 << " " << a << endl;
    }
    else
        cout << "-1" << endl;
    }
}

