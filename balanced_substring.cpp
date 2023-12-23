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
        int check = 0;
        for(int i=0; i<n; i++){
            int a = 0;
            int b = 0;
            for(int j=i; j<n; j++){
                if(str[j] == 'a'){
                    a++;
                }
                else{
                    b++;
                }
                if(a == b){
                    cout << i+1 << " " << j+1 << endl;
                    check = 1;
                    break;
                }
            }
            if(check == 1){
                break;
            }
        }
        if(check == 0){
            cout << "-1 -1"<< endl;
        }
    }

    return 0;
}