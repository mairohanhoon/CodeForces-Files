#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int a, b;
        string str;
        cin >> a >> b;
        cin >> str;
        int x, y;
        int n = str.size();
        x = 0;
        y = 0;
        for(int i=0; i<n; i++){
            if(str[i] == '1'){
                y++;
            }
            else if(str[i] == '0'){
                x++;
            }
        }
        a -= x;
        b -= y;
        if(a < 0 || b < 0){
            cout << -1 << endl;
            continue;
        }
        if(x+y == str.size()){
            string temp = str;
            reverse(temp.begin(), temp.end());
            if(temp == str){
                cout << str << endl;
            }
            else{
                cout << -1 << endl;
            }
            continue;
        }
        for(int i=0; i<n/2; i++){
            if(str[i] == '?' && str[n-i-1] != '?'){
                if(str[n-i-1] == '0'){
                    a--;
                    str[i] = '0';
                }
                else{
                    b--;
                    str[i] = '1';
                }
            }
            else if(str[i] != '?' && str[n-i-1] == '?'){
                if(str[i] == '0'){
                    a--;
                    str[n-i-1] = '0';
                }
                else{
                    b--;
                    str[n-i-1] = '1';
                }
            }
        }
        int check = 0;
        for(int i=0; i<n/2; i++){
            if(str[i] == '?' && str[n-i-1] == '?'){
                if(a >= 2){
                    str[i] = '0';
                    str[n-i-1] = '0';
                    a -= 2;
                }
                else if(b >= 0){
                    str[i] = '1';
                    str[n-i-1] = '1';
                    b -= 2;
                }
                else{
                    check = 1;
                    break;
                }
            }
        }
        if(check == 1){
            cout << -1 << endl;
            continue;
        }
        if(str[n/2] == '?'){
            if(a>0){
                str[n/2] = '0';
            }
            else{
                str[n/2] = '1';
            }
        }
        if(a != 0 && b != 0){
            cout << -1 << endl;
            continue;
        }

        string temp = str;
        reverse(temp.begin(), temp.end());
        if(temp == str){
            cout << str << endl;
        }
        else{
            cout << -1 << endl;
        }
    }

    return 0;
}