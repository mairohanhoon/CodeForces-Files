#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        string ans = str;
        bool flag = 1;
        for(int i=0; i<str.size(); i++){
            ans += str[i];
            ans.erase(0, 1);
            if(ans != str){
                cout << "YES" << endl;
                cout << ans << endl;
                flag = 0;
                break;
            }
        }
        if(flag)
            cout << "NO" << endl;
    }

    return 0;
}