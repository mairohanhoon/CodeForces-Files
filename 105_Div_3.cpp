#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int count = 0;
    int total = 0;
    int check = 1;
    while(n--){
        total = (total * 10) + check;
        check++;
        if(total%3 == 0){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}