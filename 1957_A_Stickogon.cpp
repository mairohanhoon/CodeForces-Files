#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        unordered_map<int, int> mp;
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int total = 0;
        for(auto it:mp){
            total += it.second/3;
        }
        cout << total << endl;
    }

    return 0;
}