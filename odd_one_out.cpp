#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        map<int,int> hashh;
        hashh[a]++;
        hashh[b]++;
        hashh[c]++;
        for(auto it:hashh){
            if(it.second == 1){
                cout << it.first << endl;
                break;
            }
        }
    }

    return 0;
}