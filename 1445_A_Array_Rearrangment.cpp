#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> res1(n);
        vector<int> res2(n);
        for(int i=0; i<n; i++){
            cin >> res1[i];
        }
        for(int i=0; i<n; i++){
            cin >> res2[i];
        }
        bool flag = true;
        for(int i=0; i<n; i++){
            if(res1[i]+res2[n-i-1] > k){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }

    return 0;
}