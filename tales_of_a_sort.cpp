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
        int maxxi = 0;
        int check = 0;
        for(int i=n-1; i>=1; i--){
            if(arr[i] < arr[i-1] && check == 0){
                check = 1;
            }
            if(check == 1 && arr[i-1] > maxxi){
                maxxi = arr[i-1];
            }
        }
        cout << maxxi << endl;
    }

    return 0;
}