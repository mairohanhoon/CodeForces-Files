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
        vector<int> check(26, -1);
        // for(int i=0; i<n; i++){

        // }
        int res = 0;
        for(int i=0; i<n; i++){
            if(i%2 == 0){
                if(check[str[i]-97] == -1){
                    check[str[i]-97] = 0;
                }
                else{
                    if(check[str[i]-97] != 0){
                        res = 1;
                        break;
                    }
                }
            }
            else{
                if(check[str[i]-97] == -1){
                    check[str[i]-97] = 1;
                }
                else{
                    if(check[str[i]-97] != 1){
                        res = 1;
                        break;
                    }
                }
            }
        }
        if(res == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}