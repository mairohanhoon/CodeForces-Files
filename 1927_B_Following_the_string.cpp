#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin >> arr[i];
        string checker = "abcdefghijklmnopqrstuvwxyz";
        map<char, int> hashh;
        string res = "";
        for(int i=0; i<n; i++){
            for(int j=0; j<checker.size(); j++){
                if(hashh[checker[j]] == arr[i]){
                    hashh[checker[j]]++;
                    res += checker[j];
                    break;
                }
            }
        }
        cout << res << endl;
    }

    return 0;
}