#include<bits/stdc++.h>
using namespace std;

int main(){

        int n;
        cin >> n;
        vector<int> arr;
        int minni;
        int count1 = 0;
        int count2 = 0;
        int count3 = 0;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            arr.push_back(x);
            if(arr[i] == 1){
                count1++;
            }
            else if(arr[i] == 2){
                count2++;
            }
            else{
                count3++;
            }
        }
        minni = min(count1, min(count2, count3));
        if(minni == 0){
            cout << 0 << endl;
        }
        else{
            cout << minni << endl;
            int check1 = 0;
            int check2 = 0;
            int check3 = 0;
            map<int, int> hashh;
            while(minni != 0){
                for(int i=0; i<arr.size(); i++){
                    if(arr[i] == 1 && check1 == 0){
                        if(hashh[i] == 0){
                            check1 = 1;
                            cout << i+1 << " ";
                            hashh[i]++;
                        }
                    }
                    else if(arr[i] == 2 && check2 == 0 && check1 == 1){
                        if(hashh[i] == 0){
                            check2 = 1;
                            cout << i+1 << " ";
                            hashh[i]++;
                        }
                    }
                    else if(check2 == 1 && arr[i] == 3 && check3 == 0){
                        if(hashh[i] == 0){
                            check3 = 1;
                            cout << i+1 << endl;
                            hashh[i]++;
                            minni--;
                            check1 = 0; 
                            check2 = 0;
                            check3 = 0;
                            break;
                        }
                    }
                }
                if(minni == 0){
                    break;
                }
            }
        }

    return 0;
}