#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string str1, str2, str3;
        cin >> str1 >> str2 >> str3;
        int n = str1.size();
        int flag = 0;
        for(int i=0; i<n;i++){
            if(str3[i] != str1[i] && str3[i] != str2[i]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}