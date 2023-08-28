#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        int count = 0;
        int x = 1;
        while(k>=1){
            if(k%3 == 0 || k%10 == 3){
                count+=2;
            }
            else{
                count++;
            }
            k--;
        }
        cout << count << endl;
    }

    return 0;
}