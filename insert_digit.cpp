#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        char a;
        cin >> n >> a;
        string str;
        cin >> str;
        string res = "";
        if(a == '0'){
            res += str;
            res.append(1, a);
            cout << res << endl;
        }
        else{
            int check = 0;
            for(int i=0; i<n; i++){
                if(check == 0){
                    if(a >= str[i]){
                        res.append(1, a);
                        res += str[i];
                        check = 1;
                    }
                    else{
                        res+= str[i];
                    }
                }
                else{
                    res+= str[i];
                }
            }
            cout << res << endl;
        }
    }

    return 0;
}