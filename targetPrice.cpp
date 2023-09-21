#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        char arr[10][10];
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                cin >> arr[i][j];
            }
        }
        int top = 0;
        int bottom = 9;
        int left = 0;
        int right = 9;
        int point = 1;
        int total = 0;
        while(top<=bottom && left<=right){
            for(int i=left; i<=right; i++){
                if(arr[top][i] == 'X'){
                    total+=point;
                }
            }
            top++;
            for(int i=top; i<=bottom; i++){
                if(arr[i][right] == 'X'){
                    total += point;
                }
            }
            right--;
            for(int i=right; i>=left; i--){
                if(arr[bottom][i] == 'X'){
                    total += point;
                }
            }
            bottom--;
            for(int i=bottom; i>=top; i--){
                if(arr[i][left] == 'X'){
                    total+=point;
                }
            }
            left++;
            point++;
        }
        cout << total << endl;
    }

    return 0;
}