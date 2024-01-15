#include<bits/stdc++.h>
#define ci cin
#define co cout
using namespace std;


int main(){

    int t;
    ci >> t;
    while(t--){
        int n;
        ci >> n;
        string str;
        ci >> str;
        int flag = 0;
        char check = 'a';
        string ans = "";
        for(int i=0; i<n; i++){
            if(flag == 0){
                ans += str[i];
                check = str[i];
                flag = 1;
            }
            else{
                if(str[i] == check){
                    flag = 0;
                }
            }
        }
        co << ans << endl;
    }

    return 0;
}