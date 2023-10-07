#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    vector<string> anss(5);
    cin >> str;
    cin >> anss[0] >> anss[1] >> anss[2] >> anss[3] >> anss[4];
    int check = 0;
    for(int i=0; i<5; i++){
        if(str[0] == anss[i][0]){
            check = 1;
        }
        if(check == 0){
            if(str[1] == anss[i][1]){
                check = 1;
            }
        }
    }
    
    if(check == 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}