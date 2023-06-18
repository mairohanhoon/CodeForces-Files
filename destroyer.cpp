#include<iostream>
#include <algorithm>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[100];
        for(int i=0; i<n; i++){
            cin >> A[i];
        } // input completed

        int pre_count = 0;
        for(int i=0; i<n; i++){
            if(A[i] == 0){
                pre_count++;
            }
        }

        if(pre_count == 0){
            cout << "NO" << endl;
        }
        else{
            sort(A, A+n);
            int count1 = 0;
            int count2 = 0;
            int a = 1;
            int i = 1;
            int b = 0;
            while(i<=n && b==0){
                for(int i=0; i<n; i++){
                    if(A[i] == a){
                        count1++;
                    }
                }
                if(count1 == 0){
                    for(int i=0; i<n; i++){
                        if(A[i] > a){
                            count2++;
                        }
                    }
                    if(count2 > 0){
                        cout << "NO" << endl;
                        b =1;
                    }
                    else if(count2 == 0){
                        cout << "YES" <<endl;
                        b = 1;
                    }

                }
                else if(count1 > pre_count){
                    cout << "NO" << endl;
                    b = 1;
                }
                else{
                    pre_count = count1;
                    count1 = 0;
                }
                a++;
                i++;
            }
        }

    }

    return 0;
}