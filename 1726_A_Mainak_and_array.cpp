#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int minni = arr[0];
        int maxxi = arr[n-1]; 
        for(int i=0; i<n-1; i++){
            if(arr[i] < minni) minni = arr[i];
        }
        int res = arr[n-1] - minni;
        for(int i=1; i<n; i++){
            if(arr[i] > maxxi) maxxi = arr[i];
        }
        res = max(res, maxxi - arr[0]);
        for(int i=0; i<n-1; i++){
            res = max(res, (arr[i]-arr[i+1]));
        }
        cout << res << endl;
    }

    return 0;
}
