#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int count = 0;
        vector<int> res;
        while(x!=0){
            if(x%10 != 0){
                int temp = x%10;
                temp *= pow(10, count);
                if(temp%10 != 0 && count!=0){
                    temp++;
                }
                res.push_back(temp);
            }
            count++;
            x/=10;
        }
        reverse(res.begin(), res.end());
        cout << res.size() << endl;
        for(int i=0; i<res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}