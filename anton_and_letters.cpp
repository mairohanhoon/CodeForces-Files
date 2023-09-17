#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin >> str;
    string res;
    for(int i=0; i<str.size(); i++){
        if(str[i] >='a' && str[i] <= 'z'){
            res+=str[i];
        }
    }
    int count = 0;
    int x=1;
    int i=0;
    while(i<res.size()){
        x=1;
        while(res[i] == res[i+x]){
            x++;
        }
        count++;
        i+=x;
    }
    cout << count << endl;
    return 0;
}