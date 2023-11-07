#include<bits/stdc++.h>
using namespace std;

int cube(int x){
    int total = 0;
    for(int i=1; i<=x; i++){
        total += i;
    }
    return total;
}

int main(){

    int n;
    cin >> n;
    int total = 0;
    int level = 1;
    while(n >0 ){
        n -= cube(level);
        if(n>=0){
            level++;
        }
    }
    cout << level-1 << endl;
    return 0;
}