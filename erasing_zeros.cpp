#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int x = 0;
        int total = 0;
        int i = 0;
        while(i<str.size()){
            x = 1;
            if(str[i] == '0'){
                while(str[i] == str[i+x]){
                    x++;
                }
                if(i+x < str.size() && str[i-1] == '1' && str[i+x] == '1'){
                    total += x;
                }
                i+=x;
            }
            else{
                i++;
            }
        }
        cout << total << endl;
    }

    return 0;
}