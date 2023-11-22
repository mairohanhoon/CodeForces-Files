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
        vector<char> check;
        for(int i=0; i<n; i++){
            if(check.size() == 0){
                check.push_back(str[i]);
            }
            else{
                if(str[i] == ')' && check[check.size()-1] == '('){
                    check.pop_back();
                }
                else if(str[i] == ']' && check[check.size()-1] == '['){
                    check.pop_back();
                }
                else if(str[i] == '}' && check[check.size()-1] == '{'){
                    check.pop_back();
                }
                else{
                    check.push_back(str[i]);
                }
            }
        }
        cout << check.size()/2 << endl;
    }

    return 0;
}