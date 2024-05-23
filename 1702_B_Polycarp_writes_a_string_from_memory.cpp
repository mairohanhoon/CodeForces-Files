#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        set<char> s;
        int count = 0;
        for(int i=0; i<str.size(); i++){
            s.insert(str[i]);
            if(s.size() > 3){
                count++;
                s.clear();
                s.insert(str[i]);
            }
        }
        if(s.size() > 0) count++;
        cout << count << endl;
    }

    return 0;
}