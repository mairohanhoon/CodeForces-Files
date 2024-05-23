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
        int a = 0;
        int b = 0;
        for(int i=0; i<n; i++){
            if(str[i] == '0'){
                a++;
            }else{
                b++;
            }
        }
        if(n == 1){
            cout << "YES" << endl;
        }
        else if(a == b && a%2 == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}