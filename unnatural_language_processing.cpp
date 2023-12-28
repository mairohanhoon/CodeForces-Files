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
        int i=n-1;
        string ans;
        while(i>=0){
            string temp = "";
            if(str[i] != 'a' && str[i] != 'e'){
                temp += str[i-2];
                temp+= str[i-1];
                temp += str[i];
                i-=3;
                ans = temp+ans;
                if(i>=0){
                    string check = ".";
                    ans = check +ans;
                }
            }
            else{
                temp+= str[i-1];
                temp += str[i];
                i-=2;
                ans = temp+ans;
                if(i>=0){
                    string check = ".";
                    ans = check +ans;
                }
            }
        }
        string res = "";
        cout << ans << endl;
    }

    return 0;
}