#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        char str[8][8];
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                cin >> str[i][j];
            }
        }
        char res = '1';
        for(int i=0; i<8; i++){
            string temp = "";
            for(int j=0; j<8; j++){
                temp += str[i][j];
            }
            if(temp == "BBBBBBBB"){
                res='B';

            }
            else if(temp == "RRRRRRRR"){
                res = 'R';

            }
        }
        if(res == '1'){
            for(int i=0; i<8; i++){
                string temp = "";
                for(int j=0; j<8; j++){
                    temp += str[j][i];
                }
                if(temp == "BBBBBBBB"){
                    res='B';
                }
                else if(temp == "RRRRRRRR"){
                    res = 'R';

                }
            }
        }
        cout << res << endl;
    }


    return 0;
}