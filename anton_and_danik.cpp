#include<iostream>
#include<string>

using namespace std;

int main(){

    int n;
    cin >> n;
    string S;
    cin >> S;
    int a = 0;
    int b = 0;
    for(int i=0; i<n; i++){
        if(S[i] =='A'){
            a++;
        }
        else if(S[i] == 'D'){
            b++;
        }
    }
    if(a==b){
        cout << "Friendship" << endl;
    }
    else if(a > b){
        cout << "Anton" << endl;
    }
    else{
        cout << "Danik" << endl;
    }

    return 0;
}