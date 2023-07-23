#include<iostream>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        if(a >= 1900){
            cout << "Division 1" << endl;
        }
        else if(a >= 1600){
            cout << "Division 2" << endl;
        }
        else if(a >= 1400){
            cout << "Division 3" << endl;
        }
        else{
            cout << "Division 4" << endl;
        }
    }

    return 0;
}