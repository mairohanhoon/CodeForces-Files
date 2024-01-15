#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        vector<pair<int, int>> res(4);
        for(int i=0; i<4; i++){
            cin >> res[i].first >> res[i].second;
        }
        sort(res.begin(),res.end());
        long long ans = 1;
        ans *= abs(res[0].second-res[1].second) * abs(res[2].second-res[3].second);
        cout << ans << endl;
    }

    return 0;
}

