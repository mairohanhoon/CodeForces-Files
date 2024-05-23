#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        char x;
        cin >> x;
        bool flag = false;
        for(int i=0; i<str.size(); i++){
            if(str[i] == x && (i >= 2 || i < str.size()-2) && i%2 == 0){
                flag = true;
                break;
            }
            //cout << "chala <" << endl;
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}