#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        vector<string> str;
        for(int i=0; i<8; i++){
            string temp;
            cin >> temp;
            str.push_back(temp);
        } 
        int flag = 0;
        for(int i=0; i<8; i++){
            int count1 = 0;
            for(int j=0; j<8; j++){
                if(str[i][j] == 'R'){
                    count1++;
                }
            }
            if(count1 == 8){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            cout << "R" << endl;
            continue;
        }
        for(int i=0; i<8; i++){
            int count2 = 0;
            for(int j=0; j<8; j++){
                if(str[j][i] == 'B'){
                    count2++;
                }
            }
            if(count2 == 8){
                flag = 2;
                break;
            }
        }
        if(flag == 2){
            cout << "B" << endl;
            continue;
        }
        cout << "Error" << endl;
    }

    return 0;
}