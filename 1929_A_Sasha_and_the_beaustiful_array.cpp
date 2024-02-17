#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());
        long long sum = 0;
        for(int i=1; i<n; i++){
            sum += arr[i] - arr[i-1];
        }
        cout << sum << endl;
    }

    return 0;
}