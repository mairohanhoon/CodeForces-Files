#include<iostream>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        char arr[8][8];
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                cin >> arr[i][j];
            }
        }
        char temp;
        string res;
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(arr[i][j] >= 'a' && arr[i][j] <= 'z'){
                    temp = arr[i][j];
                    res.append(1, temp);
                }
            }
        }
        cout << res << endl;
    }

    return 0;
}