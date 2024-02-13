#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int q;
        cin >> q;
        vector<vector<int>> que;
        for(int i=0; i<q; i++){
            int a, b;
            cin >> a >> b;
            que.push_back({a, b});
        }
        vector<vector<int>> res;
        for(int i=0; i<q; i++){
            int start = que[i][0];
            int end = -1;
            if(arr[que[i][0]-1] != arr[que[i][1]-1]){
                res.push_back({que[i][0], que[i][1]});
                continue;
            }
            for(int j=que[i][0]; j<que[i][1]; j++){
                if(arr[start-1] != arr[j]){
                    end = j+1;
                    break;
                }
            }
            if(end == -1){
                res.push_back({-1, -1});
            }
            else{
                res.push_back({start, end});
            }
        }
        for(int i=0; i<res.size(); i++){
            cout << res[i][0] << " " << res[i][1] << endl;
        }
    }

    return 0;
}