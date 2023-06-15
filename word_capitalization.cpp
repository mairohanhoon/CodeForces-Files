#include<iostream>
#include<string>

using namespace std;

int main(){

    string S;
    cin >> S;
    int first = S[0];
    if(first > 90)
        S[0] = S[0]-32;
    cout << S << endl;

    return 0;
}