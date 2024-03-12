#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        vector<int> arr1(n);
        vector<int> arr2(m);
        for(int i=0; i<n; i++){
            cin >> arr1[i];
        }
        for(int i=0; i<m; i++){
            cin >> arr2[i];
        }
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        int count = 0;
        for(int i=0; i<n; i++){
            if(arr1[i] >= k) break;
            for(int j=0; j<m; j++){
                if(arr1[i] + arr2[j] <= k){
                    count++;
                }
                else{
                    break;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}