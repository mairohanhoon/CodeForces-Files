#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int x = str.size()-1;
        int y = str.size()-2;
        if(str[x] == 'y'){
            str[x] = 'i';
            str += "es";
        }
        else if(str[x] == 'x' || str[x] == 's' || str[x] == 'o') str += "es";
        else if(str[x] == 'h' && str[x-1] == 'c') str += "es";
        else if(str[x] == 'f'){
            str[x] = 'v';
            str += "es";
        }
        else if(str[x-1] == 'f' && str[x] == 'e'){
            str[x-1] = 'v';
            str += "s"; 
        }
        else{
            str += "s";
        }
        cout << str << endl;
    }

    return 0;
}