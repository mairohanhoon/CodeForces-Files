#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string res;
        cin >> res;
        sort(res.begin(), res.end());
        cout << res << endl;
    }

    return 0;
}