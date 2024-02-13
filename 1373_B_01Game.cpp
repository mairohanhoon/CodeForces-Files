#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int count = 0;
        vector<char> prev;
        for(int i=0; i<str.size(); i++){
            if(i+1 < str.size() && str[i] != str[i+1]){
                count++;
                i++;
            }
            else{
                if(prev.size() > 0 && prev[prev.size()-1] != str[i]){
                    count++;
                    prev.pop_back();
                }    
                else{
                    // cout << "Note : " << str[i] << endl;
                    prev.push_back(str[i]);
                }
            }
        }
        if(count%2 == 0){
            cout << "NET" << endl;
        }
        else cout << "DA" << endl;
    }

    return 0;
}