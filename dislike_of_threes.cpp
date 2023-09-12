#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        int count = 1;
        int temp;
        while(k){
            int check = 0;
            temp = count;
            if(temp%10 == 3 || temp%3 == 0){
                check = 1;
            }
            if(check == 0){
                count++;
                k--;
            }
            else{
                count++;
            }

        }
        cout << count-1 << endl;
    }

    return 0;
}