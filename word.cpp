#include<iostream>
#include<string>

using namespace std;

int main(){

    string S;
    cin >> S;
    int n = S.length();
    int count_up, count_down;
    count_up = 0;
    count_down = 0;

    for(int i=0; i<n; i++){
        if(S[i] < 97){
            count_down++;
        }
        else{
            count_up++;
        }
    }
    if(count_up < count_down){
        for(int i=0; i<n; i++){
            if(S[i] >= 97){
                S[i] = S[i]-32;
            }
        }
    }
    else{
        for(int i=0; i<n; i++){
            if(S[i] < 97){
                S[i] = S[i]+32;
            }
        }
    }
    cout << S << endl;

    return 0;
}