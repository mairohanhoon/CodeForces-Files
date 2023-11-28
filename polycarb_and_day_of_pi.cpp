#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        vector<int> pi = {3,1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4,6,2,6,4,3,3,8,3,2,7};
        string str;
        cin >> str;
        int count =0;
        for(int i=0; i<str.size(); i++){
            if(str[i]-48 == pi[i]){
                count++;
            }
            else{
                break;
            }
        }
        cout << count << endl;
    }

    return 0;
}