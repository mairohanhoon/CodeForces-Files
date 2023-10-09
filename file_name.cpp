#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    string str;
    cin >> str;

    int i=0;
    int x=1;
    int count = 0;

    while(i<str.size()){
        x =1;
        if(str[i] == 'x' && str[i] == str[i+x]){
            while(str[i] == str[i+x]){
                x++;
            }
            if(x>2){
                count+= x-2;
            }
            i+=x;
        }
        else{
            i++;
        }
    }

    cout << count << endl; 

    return 0;
}