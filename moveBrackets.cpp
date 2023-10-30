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
        vector<char> res;
        for(int i=0; i<n; i++){
            if(res.size() == 0){
                res.push_back(str[i]);
            }
            else{
                if(res[res.size()-1] == '(' && str[i] == ')'){
                    res.pop_back();
                }
                else if(res[res.size()-1] == ')' && str[i] == '('){
                    res.pop_back();
                }
                else{
                    res.push_back(str[i]);
                }
            }
        }
        cout << res.size() << endl;
    }

    return 0;
}