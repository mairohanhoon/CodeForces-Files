#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> arr(n);
        long long count = 0;
        map<pair<int, int>, long long> hashh;
        for(int i=0; i<n; i++) cin >> arr[i];
        for(int i=0; i<n; i++){
            int modx = (x - (arr[i] % x)) % x;
            int mody = arr[i] % y;
            count += hashh[{modx, mody}];
            hashh[{arr[i]%x, arr[i]%y}]++;
        }
        cout << count << endl;
    }

    return 0;
}