#include<bits/stdc++.h>
using namespace std;

string changed(string str){
    int flag = 0;
    string temp;
    for(int i=0; i<str.size(); i++){
        if((str[i] == '0' && str[i+1] == '1') || (str[i] == '1' && str[i+1] == '0')){
            flag = 1;
            i++;    
        }
        else{
            temp += str[i];
        }
    }
    if(flag == 1){
        return changed(temp);
    }
    else{
        return temp;
    }
}

int main(){

    int n;
    cin >> n;
    string str;
    cin >> str;
    cout << changed(str).size() << endl;
    return 0;
}