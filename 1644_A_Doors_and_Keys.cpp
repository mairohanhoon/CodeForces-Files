#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int r = 0, b = 0, g = 0;
        bool flag = true;
        for(int i=0; i<str.size(); i++){
            if(str[i] == 'r'){
                r++;
            }else if(str[i] == 'b'){
                b++;
            }else if(str[i] == 'g'){
                g++;
            }
            else if(str[i] == 'R'){
                if(r == 0) {
                    cout << "NO" << endl;
                    flag = false;
                    break;
                }
            }
            else if(str[i] == 'B'){
                if(b == 0) {
                    cout << "NO" << endl;
                    flag = false;
                    break;
                }
            }
            else if(str[i] == 'G'){
                if(g == 0) {
                    cout << "NO" << endl;
                    flag = false;
                    break;
                }
            }
        }
        if(flag) cout << "YES" << endl;
    }

    return 0;
}