#include<bits/stdc++.h>
using namespace std;

int main(){


        string s, t;
        cin >> s >> t;
        int i =0;
        int j=0;
        while(i<s.size() && j<t.size()){
            if(s[i] == t[j]){
                i++;
            }
            j++;
        }
        cout << i+1 << endl;

    return 0;
}