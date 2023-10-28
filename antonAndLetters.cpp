#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin >> str;
    map<char, int> hashh;
    for(int i=0; i<str.size(); i++){
        if(str[i] >= 'a' && str[i] <='z'){
            hashh[str[i]]++;
        }
    }
    if(hashh.size() == 0){
        cout << 0 << endl;
    }
    else{
        int count = 0;
        for(auto it:hashh){
            count++;
        }
        cout << count << endl;
    }

    return 0;
}