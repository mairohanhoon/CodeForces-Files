#include<iostream>
#include<string>
using namespace std;



int main(){

    string A;
    cin >> A;
    int size = A.length();

    for(int i=0; i<size-2; i=i+2){
        for(int j=i+2; j<size; j=j+2){
            if(A[i] == '2'){
                if(A[j] == '1'){
                    swap(A[i], A[j]);
                }
            }
            else if(A[i] == '3'){
                if(A[j] == '1'){
                    swap(A[i], A[j]);
                }
                else if(A[j] == '2'){
                    swap(A[i], A[j]);
                }
            }
        }
    }

    cout << A << endl;


    return 0;
}