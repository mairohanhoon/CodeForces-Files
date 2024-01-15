#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        if(arr[0] < 0 && arr[1] < 0){
            long long res1 = arr[0]*arr[1];
            long long res = arr[n-1]*arr[n-2];
            if(res > res1){
                cout << res << endl;
            }
            else{
                cout << res1 << endl;
            }
        }
        else{
            long long res = arr[n-1]*arr[n-2];
            cout << res << endl;
        }
    }

    return 0;
}