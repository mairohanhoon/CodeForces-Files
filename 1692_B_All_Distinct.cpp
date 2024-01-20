#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> hashh;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            hashh[arr[i]]++;
        }
        int count = 0;
        for(auto it:hashh){
            count+=it.second-1;
        }
        if(count%2 == 0){
            cout << n-(count) << endl;
        }
        else{
            cout << n-((count)+1) << endl;
        }
    }

    return 0;
}