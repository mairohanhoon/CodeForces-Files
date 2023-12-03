#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> res;
        int check = 9;
        while(n!=0){
            if(n <= check){
                res.push_back(n);
                n = 0;
            }
            else{
                res.push_back(check);
                n -= check;
                check--;
            }   
        }
        int ans = 0;
        for(int i=res.size()-1; i>=0; i--){
            ans = (ans*10)+res[i];
        }
        cout << ans << endl;
    }

    return 0;
}