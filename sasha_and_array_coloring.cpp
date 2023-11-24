#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        if(n==1){
            cout << 0 << endl;
        }
        else if(n == 2){
            cout << abs(arr[0]-arr[1]);
        }
        else if(n == 3){
            cout << (arr[n-1]-arr[0])+ arr[n-2] << endl;
        }
        else if(n >=4){
            cout << (arr[n-1] - arr[0]) + (arr[n-2]-arr[1]) << endl;
        }
    }

    return 0;
}