#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        vector<vector<int> mat;
        vector<int> temp;
        int n;
        cin >> n;
        int x;
        for(int i=0; i<n; i++){
            vector<int> temp;
            int m;
            cin >> m;
            for(int j=0; j<m; j++){
                cin >> x;
                temp.push_back(x);
            }
        }
        mat.push_back(temp);
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                temp = mat[i]+mat[j];
                sort()
            }
        }
    }

    return 0;

}

// wrong ans
