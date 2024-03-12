#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        // for(int i=0; i<n; i++){
            
        //     cout << str[i] << endl;
        // }
        // continue;
        int first = 0;
        int last = 0;
        int flag = 0;
        for(int i=0; i<n; i++){
            int temp = 0;
            for(int j=0; j<n; j++){
                if(flag == 0 && arr[i][j] == '1'){
                    flag = 1;
                }
                if(arr[i][j] == '1'){
                    temp++;
                }
            }
            if(temp != 0){
                last = temp;
            }
            if(flag == 1){
                flag++;
                first = temp;
            }
            // cout << temp << endl;
        }
        if(first == 1 && last == 1){
            cout << "SQUARE" << endl;
        }
        else if(first != 1 && last != 1){
            cout << "SQUARE" << endl;
        }
        else{
            cout << "TRIANGLE" << endl;
        }
        // cout << first << " " << last << endl;
    }

    return 0;
}