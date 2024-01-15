#include<bits/stdc++.h>
#define vec vector<int>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int a, b, c; 
        cin >> a >> b >> c;
        int total = a;
        if(c%2 != 0){
            total += c/2;
            total++;
        }
        else{
            total+=c/2;
        }
        if(total > b+(c/2)){
            cout << "First" << endl;
        }
        else{
            cout << "Second" << endl;
        }
    }

    return 0;
}