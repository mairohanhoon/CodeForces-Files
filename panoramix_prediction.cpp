#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    int x = n;
    if(n %2 == 0){
        x++;
    }
    else{
        x+=2;
    }
    while(1){
        int count =0;
        for(int i=2; i<x; i++){
            if(x%i == 0){
                count = 1;
                break;
            }
        }
        if(count == 0){
            break;
        }
        else{
            x++;
        }
    }
    if(x == m){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}