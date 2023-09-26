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
        int x = 0;
        int y = 0;
        int check = 0;
        for(int i=0; i<n; i++){
            if(str[i] == 'L'){
                x--;
            }
            else if(str[i] == 'R'){
                x++;
            }
            else if(str[i] == 'U'){
                y++;
            }
            else{
                y--;
            }
            if(x == 1 && y == 1){
                check = 1;
                break;
            }
        }
        if(check != 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}