#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        vector<string> str(8);
        for(int i=0; i<8; i++){
            cin >> str[i];
        }
        int x = 0;
        int y = 0;
        for(int i=1; i<7; i++){
            for(int j=1; j<7; j++){
                if(str[i][j] == '#' && str[i-1][j-1] == '#' && str[i+1][j+1] == '#' && str[i+1][j-1] == '#' && str[i-1][j+1] == '#'){
                    x = i;
                    y = j;
                    break;
                }
            }
        }
        cout << x+1 << " " << y+1 << endl;
    }

    return 0;
}