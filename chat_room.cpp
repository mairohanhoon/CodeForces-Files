#include<bits/stdc++.h>
using namespace std;

int main(){

    string res;
    cin >> res;
    string hel = "hello";
    int j = 0;
    int count = 0;
    for(int i=0; i<res.size(); i++){
        if(res[i] == hel[j]){
            j++;
            count++;
        }
    }
    if(count == 5){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}