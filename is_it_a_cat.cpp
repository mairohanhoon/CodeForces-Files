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
        int check = 0;
        int flag = 0;
        if(n<=3){
            cout << "NO" << endl;
        }
        else{
            for(int i=0; i<n; i++){
                if(check == 0){
                    if(str[i] == 'm' || str[i] == 'M'){
                        check = 1;
                    }
                    else{
                        flag = 1;
                    }
                }
                else if(check == 1){
                    if(str[i] == 'e' || str[i] == 'E'){
                        check = 2;
                    }
                    else if(str[i] != 'm' && str[i] != 'M'){
                        flag = 1;
                    }
                }
                else if(check == 2){
                    if(str[i] == 'o' || str[i] == 'O'){
                        check = 3;
                    }
                    else if(str[i] != 'e' && str[i] != 'E'){
                        flag = 1;
                    }
                }
                else if(check == 3){
                    if(str[i] == 'w' || str[i] == 'W'){
                        check = 4;
                    }
                    else if(str[i] != 'o' && str[i] != 'O'){
                        flag = 1;
                    }
                }
                else if(check == 4){
                    if(str[i] != 'W' && str[i] != 'w'){
                        flag = 1;
                    }
                }

                if(flag == 1){
                    break;
                }
            }
            if(flag == 1){
                cout << "NO" << endl;
            }
            else{
                if(check < 4){
                    cout << "NO" << endl; 
                }
                else{
                    cout << "YES" << endl;  
                }
            }
        }
    }

    return 0;
}