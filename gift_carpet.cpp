#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        char str[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> str[i][j];
            }}
        int check1 = 0;
        int check2 = 0;
        int check3 = 0;
        int check4 = 0;
        for(int i=0; i<m; i++){
            map<char, int> hash;
            for(int j=0; j<n; j++){
                hash[str[j][i]]++;
            }
            if(check1 == 0){
                if(hash['v'] > 0){
                    check1 = 1;
                }
            }
            else if(check2 == 0){
                if(hash['i'] > 0){
                    check2 = 1;
                }
            }
            else if(check3 == 0){
                if(hash['k'] > 0){
                    check3 = 1;
                }
            }
            else if(check4 == 0){
                if(hash['a'] > 0){
                    check4 = 1;
                }
            }
        }
        if(check1 == 1 && check2 == 1 && check3 == 1 && check4 == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}