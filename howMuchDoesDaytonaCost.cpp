#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int arr[n];
        int flag = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i] == k){
                flag = 1;
            }
        }
        if(flag == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}