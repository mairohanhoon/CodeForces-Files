#include<iostream>
#include<string>

using namespace std;

int main(){

    string S;
    cin >> S;

    int len = S.length();

    for(int i=0; i<len; i++){
        if(S[i]=='A' || S[i]=='a' || S[i]=='E' || S[i]=='e' || S[i]=='I' || S[i]=='i' || S[i]=='O' || S[i]=='o' || S[i]=='U' || S[i]=='u' || S[i]=='Y' || S[i]=='y'){
            S[i] = S[i+1];
            len--;
            for(int j=i+1; j<len; j++){
                S[j] = S[j+1];
            }
            i--;
        }
    }

    for(int i=0; i<len; i++){
        cout << ".";
        if(S[i] < 97){
            S[i] = S[i]+32;
        }
        cout << S[i];
    }
    cout << endl;

    return 0;
}