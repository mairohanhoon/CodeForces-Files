#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<pair<long long, long long>> str(n);
        for(int i=0; i<n; i++){
            cin >> str[i].first >> str[i].second;
        }
        unordered_map<long long, long long> hashh;
        long long maxxi = LLONG_MAX;
        long long minni = LLONG_MIN;
        for(long long i=0; i<n; i++){
            if(str[i].first == 1){
                if(str[i].second > minni){
                    minni = str[i].second;
                }
            }
            else if(str[i].first == 2){
                if(str[i].second < maxxi){
                    maxxi = str[i].second;
                }
            }
            else{
                hashh[str[i].second] = -1;
            }
        }
        long long total = (maxxi-minni)+1;
        if(total < 0){
            cout << 0 << endl;
            continue;
        }
        for(auto it:hashh){
            if(it.first>=minni && it.first <=maxxi){
                total--;
            }
        }
        cout << total << endl;
    }

    return 0;
}