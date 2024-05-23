#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        map<int, int> mp;
        int count = 0;
        for(int i=0; i<n-2; i++){
            if(v[i] == v[i+2] && hashh[v[i]] == 0){
                hashh[v[i+2]] = 1;
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}