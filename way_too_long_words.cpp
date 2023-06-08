#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    while(n--){
        char A[101];
        cin >> A;
        int i=0;
        cout << A[0];
        i++;
        while(A[i] != '\0')
            i++;

        // cout << i << endl;
    
        if((i-1) < 10){
            for(int j=1; j<i; j++)
                cout << A[j];
            cout << endl;
        }
        else{
            cout << i-2;
            cout << A[i-1];
            cout << endl;
        }
    }
    
    return 0;
}