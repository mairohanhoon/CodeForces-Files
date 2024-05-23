#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        string str;
        cin >> str;
        int a = 0, b = 0, c = 0, d = 0;
        for(int i=0; i<str.size(); i++){
            if(str[i] == 'U'){
                a++;
            }
            else if(str[i] == 'D'){
                b++;
            }
            else if(str[i] == 'L'){
                c++;
            }
            else if(str[i] == 'R'){
                d++;
            }
        }
        bool flag1 = false;
        bool flag2 = false;
        if(x<1){
            if(c >= abs(x)){
                flag1 = true;
            }
        }
        else{
            if(d >= x){
                flag1 = true;
            }
        }
        if(y<1){
            if(b >= abs(y)){
                flag2 = true;
            }
        }
        else{
            if(a >= y){
                flag2 = true;
            }
        }
        if(flag1 && flag2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;   
        }
    }

    return 0;
}