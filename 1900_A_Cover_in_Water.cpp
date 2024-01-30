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
        int count = 0;
        int check = 0;
        int total = 0;
        for(int i=0; i<n; i++){
            if(str[i] == '.'){
                count++;
                total++;
            }
            else{
                count = 0;
            }
            if(count == 3){
                check = 1;
                break;
            }
        }
        if(check == 1){
            cout << 2 << endl;
        }
        else{
            cout << total << endl;
        }
    }

    return 0;
}