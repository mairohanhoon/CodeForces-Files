#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int check = 0;
        for(int i=0; i<n-1; i++){
            if(arr[i+1] < arr[i]){
                check = 1;
                break;
            }
        }
        if(check == 1 && k<=1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

    return 0;
}