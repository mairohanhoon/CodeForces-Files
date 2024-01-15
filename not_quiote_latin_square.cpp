#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        vector<string> str(3);
        cin >> str[0];
        cin >> str[1];
        cin >> str[2];
        unordered_map<char, int> hashh;
        for(int i=0; i<3; i++){
            hashh[str[i][0]]++;
            hashh[str[i][1]]++;
            hashh[str[i][2]]++;
        }
        if(hashh['A'] == 2){
            cout << "A" << endl;
        }
        else if(hashh['B'] == 2){
            cout << "B" << endl;
        }
        else{
            cout << "C" << endl;
        }
    }

    return 0;
}