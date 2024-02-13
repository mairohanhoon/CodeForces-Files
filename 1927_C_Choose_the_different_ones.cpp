#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> arr1(n);
        vector<int> arr2(m);
        map<int, int> hashh1;
        map<int, int> hashh2;
        for(int i=0; i<n; i++){
            cin >> arr1[i];
        } 
        for(int i=0; i<m; i++){
            cin >> arr2[i];
        }
        for(int i=0; i<n; i++){
            hashh1[arr1[i]]++;
        }
        for(int i=0; i<m; i++){
            hashh2[arr2[i]]++;
        }

        int res1 = 0;
        int res2 = 0;
        int common = 0;
        for(int i=1; i<=k; i++){
            if(hashh1[i] >= 1 && hashh2[i] == 0){
                res1++;
            }
            if(hashh1[i] == 0 && hashh2[i] >= 1){
                res2++;
            }
            if(hashh1[i] >= 1 && hashh2[i] >= 1){
                common++;
            }
        }
        // cout << res1 << " " << res2 << " " << common << endl;
        if(res1 > (k/2) || res2 > (k/2)) cout << "NO" << endl;
        else if(res1 == k/2 && res2 == k/2){
            cout << "YES" << endl;
        }
        else if(common == k){
            cout << "YES" << endl;
        }
        else if(res1+res2+common < k){
            cout << "NO" << endl;
        }
        else{
            if(res1 < (n/2)){
                common -= (res1 -(n/2));
            }
            if(res2 < (n/2)){
                common -= (res2 - (n/2));
            }

            if(common < 0){
                cout << "yes" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}