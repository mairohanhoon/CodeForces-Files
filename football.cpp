#include<iostream>
#include<string>
using namespace std;

int main(){

    string S;
    cin >> S;
    int n = S.length();
    int max = 1;
    int count = 1;
    for(int i=0; i<n-1; i++){
        if(S[i] == S[i+1]){
            count++;
        }
        else{
            count = 1;
        }

        if(count > max){
            max = count;
        }
    }
    if(max >= 7){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}