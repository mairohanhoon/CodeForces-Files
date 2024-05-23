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
        int a = 0, b = 0;
        for(int i=0; i<n; i++){
            if(str[i] == 'A') a++;
            else b++;
        }
        if(a == b){
            cout << "?" << endl;
        }
        else if(a > b){
            cout << "A" << endl;
        }
        else{
            cout << "B" << endl;
        }
    }

    return 0;
}