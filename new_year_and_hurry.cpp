#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, k;
    cin >> n >> k;
    int temp = 0;
    int res = 0;
    int total = 240-k;
    for(int i=0; i<n; i++){
        temp += (i+1)*5;
        if(temp > total){
            break;
        }
        else{
            res++;
        }
    }
    cout << res << endl;

    return 0;
}