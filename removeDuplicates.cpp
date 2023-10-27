#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n]; 
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    unordered_map<int, int> hashh;
    for(int i=0; i<n; i++){
        hashh[arr[i]]++;
    }
    vector<int> res;
    for(int i=0; i<n; i++){
        if(hashh[arr[i]] > 1){
            hashh[arr[i]]--;
        }
        else{
            res.push_back(arr[i]);
        }
    }
    cout << res.size() << endl;
    for(int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }

    return 0;
}