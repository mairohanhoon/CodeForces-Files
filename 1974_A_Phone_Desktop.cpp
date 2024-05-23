#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> y >> x;
        int total_x = 0;
        int empty = 0;
        if(x%2 == 0){
            total_x = x/2;
            empty += total_x*7;
        }
        else{
            total_x = (x/2) + 1;
            empty += (total_x-1) * 7;
            empty += 11;
        }
        y-=empty;
        if(y > 0){
            if(y%15 == 0){
                total_x += y/15;
            }
            else{
                total_x += (y/15)+1;
            }
        }
        cout << total_x << endl;
    }

    return 0;
}