#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;
        unordered_map<string, int> hashh;
        for(int i=0; i<n; i++){
            string ans = "";
            ans.append(str, i, n);
            for(int j=i; j<n; j++){
                string temp = ans;
                
                hashh[temp]++;
            }
        }
        int count = 0;
        for(auto it:hashh){
            count++;
        }
        cout << count << endl;
    }

    return 0;
}