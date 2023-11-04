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
        string res;
        int i=0;
        int x = 1;
        while(i<n){
            x = 1;
            while(str[i] == str[i+x]){
                x++;
            }
            res += str[i];
            i+=x;
        }
        sort(res.begin(), res.end());
        int check = 0;
        for(int i=0; i<res.size()-1; i++){
            if(res[i] == res[i+1]){
                check = 1;
                break;
            }
        }
        if(check == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}