#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int A[3];
    int total = 0;
    while(n--){
        int count = 0;
        for(int i=0; i<3; i++){
            cin >> A[i];
            if(A[i] == 1)
                count++;
        }
        if(count > 1)
            total++;
    }
    cout << total << endl;

    return 0;
}