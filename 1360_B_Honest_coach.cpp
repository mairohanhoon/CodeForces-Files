#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int diff = INT_MAX;
        for(int i = 0; i < n-1; i++){
            diff = min(diff, v[i+1] - v[i]);
        }
        cout << diff << endl;
    }

    return 0;
}