#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a = 0;
        int b = 0;
        string str;
        cin >> str;
        for(int i=0; i<n; i++){
            if(str[i] == 'B'){
                b++;
            }
        }
        if(b == k){
            cout << 0 << endl;
        }
        else{
            cout << 1 << endl;
            if(b < k){
                for(int i=0; i<n; i++){
                    if(str[i] == 'A'){
                        a++;
                    }
                    if(a == k-b){
                        cout << i+1 << " B" << endl;
                        break;
                    }
                }
            }
            else{
                for(int i=0; i<n; i++){
                    if(str[i] == 'B'){
                        a++;
                    }
                    if(a == b-k){
                        cout << i+1 << " A" << endl;
                        break;
                    }
                }
            }
        }
    }

    return 0;
}