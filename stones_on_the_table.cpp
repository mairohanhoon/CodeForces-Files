#include<iostream>
#include<string>
using namespace std;

int main(){

    int n;
    char A[50];
    cin >> n;
    cin >> A;
    if(n == 1){
        cout << "0" << endl;
    }
    else{
        int count = 0;
        int x = 0;
        while(x != 1){
            int check = 0;
            for(int i=0; i<n-1; i++){
                if(A[i] == A[i+1]){
                    check = 1;
                    for(int j=i; j<n-1; j++){
                        A[i] = A[i+1];
                        n--;
                    }
                    i--;
                }
            }
            if(check == 0){
                x = 1;
            }
            else{
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}

//Not solved yet
