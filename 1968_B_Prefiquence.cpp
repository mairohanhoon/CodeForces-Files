#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;;
    while(t--){
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        int i=0, j=0;
        while(i < a.size() && j < b.size()){
            if(a[i] == b[j]){
                i++;
                j++;
            }else{
                j++;
            }
        }
        cout << i << endl;
    }

    return 0;
}