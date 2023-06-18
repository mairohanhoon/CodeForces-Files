#include<iostream>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[100];
        for(int j=0; j<n; j++){
            cin >> A[j];
        }
        int a = 1;
        int count = 0;
        while(a!=0){
            int b = 0;
            int sum = 0;
            for(int i=0; i<n; i++){
                sum = sum + A[i];
            }
            int  pro = 1;
            for(int i=0; i<n; i++){
                pro = pro*A[i];
            }

            //Condition to meet
            if(sum >= 0 && pro == 1){
                a = 0;
            }
            else if(sum < 0 && pro == 1){
                for(int i=0; i<n; i++){
                    if(A[i] == -1 && b == 0){
                        A[i] = 1;
                        b = 1;
                    }
                }
                count++;
            }
            else if(sum < 0 && pro == -1){
                for(int i=0; i<n; i++){
                    if(A[i] == -1 && b == 0){
                        A[i] = 1;
                        b = 1;
                    }
                }
                count++;
            }
            else if(sum >= 0 && pro == -1){
                for(int i=0; i<n; i++){
                    if(A[i] == -1 && b == 0){
                        A[i] = 1;
                        b = 1;
                    }
                }
                count++;
            }
            
        }
        cout << count << endl;
    }

    return 0;

}