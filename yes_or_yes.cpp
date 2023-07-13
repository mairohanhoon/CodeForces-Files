#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string x;
        cin >> x;
        if(x[0] > 'Z'){
            x[0] -= 32;
        }
        if(x[1] > 'Z'){
            x[1] -= 32;
        }
        if(x[2] > 'Z'){
            x[2] -= 32;
        }

        if(x[0] == 'Y' && x[1] == 'E' && x[2] == 'S'){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}