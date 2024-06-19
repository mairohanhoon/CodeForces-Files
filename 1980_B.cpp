#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> arr(n);
        map<int, int> mp;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int to_check = arr[f-1];
        int count = mp[to_check];
        sort(arr.rbegin(), arr.rend());
        for(int i=0; i<k; i++){
            mp[arr[i]]--;
        }
        if(mp[to_check] == count) 
            cout << "NO" << endl;
        else if(mp[to_check] == 0)
            cout << "YES" << endl;
        else  
            cout << "MAYBE" << endl;
    }

    return 0;
}