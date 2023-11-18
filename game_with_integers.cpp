#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x == 1){
            cout << "First" << endl;
        }
        else if(x%3 == 0){
            cout << "Second" << endl;
        }
        else{
            cout << "First" << endl;
        } 
    }

    return 0;
}