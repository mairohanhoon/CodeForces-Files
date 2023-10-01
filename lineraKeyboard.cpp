#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string declarer;
        cin >> declarer;
        string str;
        cin >> str;
        int count  = 0;
        map<char, int> check;
        for(int i=0; i<declarer.size(); i++){
            check[declarer[i]] = i;
        }
        for(int i=0; i<str.size()-1; i++){
            count += abs(check[str[i]] - check[str[i+1]]);
        }
        cout << count << endl;
    }

    return 0;
}