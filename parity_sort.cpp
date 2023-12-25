#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> res(n);
        for(int i=0; i<n; i++){
            cin >> res[i];
        }
        vector<int> ans = res;
        sort(ans.begin(), ans.end());
        int check = 0;
        for(int i=0; i<n; i++){
            if(ans[i]%2 == 0 && res[i]%2 != 0){
                check = 1;
                break;
            }
            else if(ans[i]%2 != 0 && res[i]%2 == 0){
                check = 1;
                break;
            }
        }
        if(check == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

    return 0;
}