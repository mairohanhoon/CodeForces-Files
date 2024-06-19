#include<bits/stdc++.h>
using namespace std;

int countDays(int days, vector<vector<int>> meetings) {
        sort(meetings.begin(), meetings.end());
        int count =meetings[0][0]-1;
        cout << count << endl;
        int max_range=0;
        for(int i=0; i<meetings.size()-1; i++){
            max_range = max(max_range, meetings[i][1]);
            if(meetings[i+1][0] > max_range+1){
                count+=(meetings[i+1][0] - max_range)-1;
                cout << "chala ";
            }
            cout << max_range << endl;
        }
        if(days > max(meetings[meetings.size()-1][1], max_range)){
            count += days - max(meetings[meetings.size()-1][1], max_range);
        }
        return count;
    }

int main(){

   vector<vector<int>> arr = {{3,49},{23,44},{21,56},{26,55},{23,52},{2,9},{1,48},{3,31}};
    int res = countDays(57, arr);
    cout << res << endl;

    return 0;
}