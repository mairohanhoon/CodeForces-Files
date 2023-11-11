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
        unordered_map<char, int> hashh;
        int count = 0;
        for(int i=0; i<n; i++){
            if(hashh[str[i]] > 0){
                count++;
            }
            else{
                hashh[str[i]]++;
                count += 2;
            }
        }
        cout << count << endl;
    }
    return 0;
}