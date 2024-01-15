#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    unordered_map<int, int> hashh;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        hashh[arr[i]]++;
    }
    if(k > n){
        cout << 1 << endl;
        return 0;
    }
    int total = 0;
    for(auto it:hashh){
        if(it.second >= k){
            total += it.second-k;
            total++;
        }
    }
    cout << total << endl;

    return 0;
}