#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n %4 == 0){
            cout << "YES" << endl;
            vector<int> res;
            int total = 0;
            int x = 2;
            for(int i=0; i<n/2; i++){
                res.push_back(x);
                total += x;
                x+=2;
            }
            x = 1;
            int total2 = 0;
            for(int i=0; i<n/2; i++){
                if(i == (n/2)-1){
                    res.push_back(total-total2);
                }
                else{
                    res.push_back(x);
                    total2+=x;
                    x+=2;
                }
            }
            for(int i=0; i<res.size(); i++){
                cout << res[i] << " ";
            }
            cout << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}