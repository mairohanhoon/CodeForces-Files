#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;
        int diff = 0;
        int count0 = 0;
        int count1 = 0;
        for(int i=0; i<n-1; i++){
            if(str[i] != str[i+1]){
                diff++;
            }
    
            if(str[i] == '0'){
                count0++;
            }
            else{
                count1++;
            }
        }
        if(str[n-1] == '0'){
            count0++;
        }
        else{
            count1++;
        }
        if(count0 > count1){
            cout << "YES" << endl;
        }
        else if(diff > 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}