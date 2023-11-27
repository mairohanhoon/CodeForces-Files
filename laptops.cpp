#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<vector<int>> res;
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        res.push_back({a, b});
    }   
    sort(res.begin(), res.end());
    int check = 0;
    for(int i=0; i<n-1; i++){
        if(res[i][0] != res[i+1][0]){
            if(res[i][1] > res[i+1][1]){
                check = 1;
                break;
            }
        }
    }
    if(check == 1){
        cout << "Happy Alex" << endl;
    }
    else{
        cout << "Poor Alex" << endl;
    }

    return 0;
}