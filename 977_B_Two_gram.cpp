#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    string str;
    cin >> n;
    cin >> str;
    map<string, int> hashh;
    int maxxi = 0;
    for(int i=0; i<n-1; i++){
        string check = "";
        check += str[i];
        check += str[i+1];
        hashh[check]++;
        maxxi = max(maxxi, hashh[check]);
    }
    string res = "";
    for(auto it:hashh){
        if(it.second == maxxi){
            res = it.first;
            break;
        }
    }
    cout << res << endl;

    return 0;
}