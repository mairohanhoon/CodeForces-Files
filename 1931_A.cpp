#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string res = "";
        if(n > 52){
            res += "zz";
            char temp = 'a'+((n-52)-1);
            res = temp + res;
        }
        else if(n > 27){
            res += 'z';
            n-=26;
            char temp = 'a'+((n)-2);
             res = temp + res;
             res = 'a' + res;
        }
        else{
            res += "aa";
            n -= 2;
            char temp = 'a'+((n)-1);
            res = res + temp;
        }
        cout << res << endl;
    }

    return 0;
}