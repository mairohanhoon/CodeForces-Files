#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string str = "codeforces";
        int count =0;
        string res;
        cin >> res;
        for(int i=0; i<res.size(); i++){
            if(str[i]!= res[i]){
                count++;
            }
        }
        cout << count << endl;
    }
}