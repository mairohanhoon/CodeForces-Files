#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int a = 0;
        for(int i=0; i<5; i++){
            if(str[i] == 'A') a++;
        }
        if(a >=3) cout << "A" << endl;
        else cout << "B" << endl;
    }

    return 0;
}