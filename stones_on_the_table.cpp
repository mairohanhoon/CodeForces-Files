#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    string str;
    cin >> str;
    int x=1;
    int i=0;
    int count = 0;
    while(i<n){
        x = 1;
        if(str[i] == str[i+1]){
            while(str[i] == str[i+x]){
                x++;
            }
            i+=x;
            count += x-1;
        }
        else{
            i++;
        }
    }
    cout << count << endl;

    return 0;
}

//Not solved yet
