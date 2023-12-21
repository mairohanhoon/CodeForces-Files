#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        string res = "";
        res += str;
        reverse(str.begin(), str.end());
        res+= str;
        cout << res << endl;
    }

    return 0;
}