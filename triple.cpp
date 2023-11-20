#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> res;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        if(n < 3){
            cout << -1 << endl;
            continue;
        }
        sort(arr, arr+n);
        int check = 0;
        for(int i=0; i<n-2; i++){
            if(arr[i] == arr[i+1] && arr[i] == arr[i+2]){
                cout << arr[i] << endl;
                check = 1;
                break;
            }
        }
        if(check == 0){
            cout << -1 << endl;
        }
    }

    return 0;
}