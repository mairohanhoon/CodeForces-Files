#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string x;
        cin >> x;
        int count = 0;
        int start = 1;
        for(int i=0; i<4; i++){
            int temp = 0;
            if(x[i] == '0'){
                temp = 10;
            }
            else{
                temp = x[i]-48;
            }
            count += abs(temp - start);
            count++;
            start = temp;
        }
        cout << count << endl;
    }

    return 0;
}