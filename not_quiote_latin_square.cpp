#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string str1;
        string str2;
        string str3;
        cin >> str1 >> str2 >> str3;
        int n = 3;
        int check = 0;
        for(int i=0; i<3; i++){
            if(str1[i] == '?'){
                check = 1;
            }
            if(str2[i] == '?'){
                check = 2;
            }
            if(str3[i] == '?'){
                check = 3;
            }
        }
        if(check == 1){
            int a = 0;
            int b = 0;
            int c = 0;
            for(int i=0; i<n; i++){
                if(str1[i] == 'A'){
                    a++;
                }
                else if(str1[i] == 'B'){
                    b++;
                }
                else if(str1[i] == 'C'){
                    c++;
                }
            }
            if(a==0){
                cout << "A" << endl;
            }
            else if(b== 0){
                cout << "B" << endl;
            }
            else{
                cout << "C" << endl;
            }
        }
        else if(check == 2){
            int a = 0;
            int b = 0;
            int c = 0;
            for(int i=0; i<n; i++){
                if(str2[i] == 'A'){
                    a++;
                }
                else if(str2[i] == 'B'){
                    b++;
                }
                else if(str2[i] == 'C'){
                    c++;
                }
            }
            if(a==0){
                cout << "A" << endl;
            }
            else if(b== 0){
                cout << "B" << endl;
            }
            else{
                cout << "C" << endl;
            }
        }
        else{
            int a = 0;
            int b = 0;
            int c = 0;
            for(int i=0; i<n; i++){
                if(str3[i] == 'A'){
                    a++;
                }
                else if(str3[i] == 'B'){
                    b++;
                }
                else if(str3[i] == 'C'){
                    c++;
                }
            }
            if(a==0){
                cout << "A" << endl;
            }
            else if(b== 0){
                cout << "B" << endl;
            }
            else{
                cout << "C" << endl;
            }
        }
    }

    return 0;
}