#include<iostream>
#include<string>

using namespace std;

int main(){

    string S;
    cin >> S;
    int length = S.length();
    
    int count = 0;
    for(int i=0; i<length-1; i++){
        for(int j=i+1; j<length; j++){
            if(S[i] == S[j])
                count++;
        }
    }

    int distinct = length - count;

    if(distinct%2==0)
        cout <<"CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}