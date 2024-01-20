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
        map<string, int> hashh;
        for(int i=0; i<n-1; i++){
            string temp = "";
            temp += str[i];
            temp += str[i+1];
            hashh[temp]++;
        }
        int count = 0;
        for(auto it:hashh){
            count++;
        }
        cout << count << endl;
    }

    return 0;
}