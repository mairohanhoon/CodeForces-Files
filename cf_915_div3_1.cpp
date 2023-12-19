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
        sort(str.begin(), str.end());
        int i=0;
        int x = 1;
        int count =0;
        while(i<n){
            x = 1;
            while(str[i] == str[i+x] && i+x < n){
                x++;
            }
            if(x >= 1+(str[i]-'A')){
                count++;
            }
            i+=x;
        }
        cout << count << endl;
    }

    return 0;
}