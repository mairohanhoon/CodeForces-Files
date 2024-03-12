#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> res(2*n);
        for(int i=0; i<2*n; i++) cin >> res[i];
        sort(res.rbegin(), res.rend());
        long long total = 0;
        for(int i=1; i<n*2; i+=2){
            total += res[i];
        }
        cout << total << endl;
    }

    return 0;
}