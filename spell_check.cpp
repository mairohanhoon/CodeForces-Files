#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        string a = "Timur";
        cin >> s;
        if(n == 5){
            sort(a.begin(), a.end());
            sort(s.begin(), s.end());
            if(a == s){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }  
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}