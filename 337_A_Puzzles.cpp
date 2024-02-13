#include<bits/stdc++.h>
using namespace std;

int main(){

    int k, n;
    cin >> k >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());
    int res = INT_MAX;
    int i = 0;
    for(int j=k-1; j<n; j++){
        res = min(res, arr[j]-arr[i]);
        i++;
    }
    cout << res << endl;
    return 0;
} 