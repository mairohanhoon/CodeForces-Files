#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        bool flag = true;
        if(str[0] != 'Y' && str[0] != 'e' && str[0] != 's') flag = false;
        for(int i=0; i<str.size()-1; i++){
            if(str[i] == 'Y'){
                if(str[i+1] != 'e'){
                    flag = false;
                    break;
                }
            }
            else if(str[i] == 'e'){
                if(str[i+1] != 's'){
                    flag = false;
                    break;
                }
            }
            else if(str[i] == 's'){
                if(str[i+1] != 'Y'){
                    flag = false;
                    break;
                }
            }
            else{
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}