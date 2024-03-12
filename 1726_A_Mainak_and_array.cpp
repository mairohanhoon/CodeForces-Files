#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int maxxi = 0; 
        int minni = INT_MAX;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i] > maxxi) maxxi = arr[i];
            if(arr[i] < minni) minni = arr[i];
        }
        if(n == 1){
            cout << 0 << endl;
        }
        else if(arr[0] == minni || arr[n-1] == maxxi){
            cout << maxxi - minni << endl;
        }
        else if(arr[0] = maxxi && arr[1] == minni){
            cout << maxxi - minni << endl;
        }
        else{
            int a = maxxi - arr[0];
            int b = arr[n-1] - minni;
            cout << max(a, b) << endl;
        }
    }

    return 0;
}
