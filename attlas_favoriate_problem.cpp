#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string s;
        int n;
        cin >> n;
        cin >> s;
        sort(s.begin(), s.end());
        cout << s[s.size()-1]-'a'+1 << endl;
    }

    return 0;
}