#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        map<int, int> mp;
        stack<int> st1;
        stack<int> st2;
        for(int i=0; i<str.size(); i++){
            if(str[i] == 'b'){
                if(!st1.empty()){
                    mp[st1.top()]++;
                    st1.pop();
                }
            }
            else if(str[i] == 'B'){
                if(!st2.empty()){
                    mp[st2.top()]++;
                    st2.pop();
                }
            }
            else if(str[i] >= 'a' && str[i] <= 'z'){
                st1.push(i);
            }
            else if(str[i] >= 'A' && str[i] <= 'Z'){
                st2.push(i);
            }
        }
        string res = "";
        for(int i=0; i<str.size(); i++){
            if(mp[i] < 1 && str[i] != 'b' && str[i] != 'B'){
                res += str[i];
            }
        }
        cout << res << endl;
    }

    return 0;
}