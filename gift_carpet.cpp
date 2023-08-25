#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        char arr[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> arr[i][j];
            }
        }
        int check = 0; 
        int check1 = 0;
        int check2 = 0;
        int check3 = 0;
        int check4 = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                check = 0; 
                check1 = 0;
                check2 = 0;
                check3 = 0;
                check4 = 0;
                if(arr[i][j] == 'v'){
                    check1=1;
                }
                else if(arr[i][j] == 'i'){
                    check2=1;
                }
                else if(arr[i][j] == 'k'){
                    check3=1;
                }
                else if(arr[i][j] == 'a'){
                    check4=1;
                }
            }
            if(check1 == 1 && check2 == 1 && check3 == 1 && check4 == 1){
                check = 1;
                break;
            }
        }
        if(check == 1){
            cout << "YES" << endl;
        }
        else{
            for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    check = 0; 
                    check1 = 0;
                    check2 = 0;
                    check3 = 0;
                    check4 = 0;
                    if(arr[j][i] == 'v'){
                        check1=1;
                    }
                    else if(arr[j][i] == 'i'){
                        check2=1;
                    }
                    else if(arr[j][i] == 'k'){
                        check3=1;
                    }
                    else if(arr[j][i] == 'a'){
                        check4=1;
                    }
                }
                if(check1 == 1 && check2 == 1 && check3 == 1 && check4 == 1){
                    check = 1;
                    break;
                }
            }
            if(check == 1){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}