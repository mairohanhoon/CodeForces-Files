#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> res(n);
        for(int i=0; i<n; i++){
            cin >> res[i];
        }
        sort(res.begin(), res.end());
        int ans = 1;
        int count = 1;
        for(int i=0; i<n-1; i++){
            if(res[i+1]-res[i] <= k){
                count++;
            }
            else{
                count = 1;
            }
            if(count > ans){
                ans = count;
            }
        }
        cout << n-ans << endl;        
    }

    return 0;
}