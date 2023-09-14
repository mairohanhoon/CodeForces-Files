#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string str, res;
        cin >> str;
        for(int i=0; i<str.size()-1; i++){
            if(str[i] == str[i+1]){
                res+=str[i];
                i++;
            }
            else{
                res+=str[i];
            }
        }
        res+=str[str.size()-1];
        cout << res << endl;
    }

    return 0;
}