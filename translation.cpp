#include<iostream>
#include<string>

using namespace std;

int main(){

    string S1, S2;
    cin >> S1;
    cin >> S2;

    int n = S1.length();
    int check = 0;
    for(int i=0; i<n; i++){
        if(S1[i] != S2[n-i-1]){
            check = 1;
        }
    }
    if(check == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}