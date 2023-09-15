#include<bits/stdc++.h>
using namespace std;

int number(vector<int> &arr){
    int numm = 0;
    for(int i=0; i<arr.size(); i++){
        numm = (numm*10) + arr[i];
    }
    return numm;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        int num; // denotes the current building
        cin >> num;
        int total = 0;
        
        if(num == 1){
            total = 1;
            cout << total << endl;
        }
        else if(num == 2){
            cout << 21 << endl;
        }
        else if(num == 3){
            cout << 31 << endl;
        }
        else if(num == 4){
            cout << 41 << endl;
        }
        else if(num == 5){
            cout << 51 << endl;
        }
        else if(num == 6){
            cout << 61 << endl;
        }
        else if(num == 7){
            cout << 71 << endl;
        }
        else if(num == 8){
            cout << 81 << endl;
        }
        else if(num == 9){
            cout << 91 << endl;
        }
        else{
            int  digit = 1;
            vector<int> res;
            int fin_number = number(res);
            do{
                if(res.size() >=4){
                    res.clear();
                    digit++;
                }
                res.push_back(digit);
                total+=res.size();
                fin_number = number(res);
            }while(fin_number!=num);
            cout << total << endl;
        }
    }

    return 0;
}