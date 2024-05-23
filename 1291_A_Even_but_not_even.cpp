#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count_odd = 0;
        for(int i=0; i<n; i++){
            if((s[i]-'0')%2 != 0){
                count_odd++;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(s[i] == '0' || (s[i]-'0') % 2 == 0){
                s.erase(i, 1);
            }
            else{
                break;
            }
        }
        if(count_odd%2 == 1){
            for(int i=0; i<s.size(); i++){
                if((s[i]-'0')%2 != 0){
                    s.erase(i, 1);
                    count_odd--;
                    break;
                }
            }
            if(count_odd == 0){
                cout <<  -1 << endl;
                continue;
            }
            else{
                //cout << s << "yes"<< endl;
            }
        }
        else if(s.size() == 0){
            cout << -1 << endl;
            continue;
        }
        
            bool flag = false;
            for(int i=0; i<s.size(); i++){
                if(s[i] != '0'){
                    flag = true;
                }
                if(flag){
                    cout << s[i];
                }
            }
            if(flag == false){
                cout << -1;
            }
            cout << endl;
        
    }

    return 0;
}