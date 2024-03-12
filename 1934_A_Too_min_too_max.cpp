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
        sort(arr.begin(), arr.end());
        int ans = arr[n-1]+arr[n-2] - arr[0] - arr[1];
        ans *= 2;
        cout << ans << endl;
    }

    return 0;
}