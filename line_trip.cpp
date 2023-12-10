#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int max_dis = 0;
        if(arr[0] > max_dis){
            max_dis = arr[0];
        }
        for(int i=1; i<n; i++){
            if(arr[i] - arr[i-1] > max_dis){
                max_dis = arr[i] - arr[i-1];
            }
        }
        if(2*(x-arr[n-1]) > max_dis){
            max_dis = 2*(x-arr[n-1]);
        }
        cout << max_dis << endl;
    }

    return 0;
}