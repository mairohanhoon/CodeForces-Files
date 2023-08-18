#include<bits/stdc++.h>

using namespace std;

int main(){


    string a, b;
    cin >> a >> b;
    string c;

    for(int i=0;i<a.size(); i++){
        if(a[i] == '1' && b[i] == '1'){
            c.append("0");
        }
        else if(a[i] == '0' && b[i] == '0'){
            c.append("0");
        }
        else{
            c.append("1");
        }
    }
    cout << c << endl;

    return 0;
}