#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        string str;
        cin >> n;
        cin >> str;
        string str2 = str;
        
        reverse(str2.begin(), str2.end());
        if(str == str2){
            cout << str << endl;
        }
        else{
            if(n%2 == 0){
                if(str2 < str)
                    cout << str2+str << endl;
                else
                    cout << str << endl;
            }
            else{
                if(str2 < str)
                    cout << str2 << endl;
                else    
                    cout << str+str2 << endl;
            }
        }
    }

    return 0;
}