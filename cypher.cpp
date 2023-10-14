#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        vector<string> str(n);
        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            cin >> str[i];
        }
        for(int i=0;i<n; i++){
            int count = 0;
            string s = str[i];
            for(int j=0; j<s.size(); j++){
                if(s[j] == 'U'){
                    count--;
                }else{
                    count++;
                }
            }
            if(count < 0){
                count = count%10;
                while(count != 0){
                    if(arr[i] == 0){
                        arr[i] = 9;
                    }
                    else{
                        arr[i]--;
                    }
                    count++;
                }
            }
            else if(count > 0){
                count = count%10;
                while(count != 0){
                    if(arr[i] == 9){
                        arr[i] = 0;
                    }
                    else{
                        arr[i]++;
                    }
                    count--;
                }
            }
        }
        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        } 
        cout << endl;
    }

    return 0;
}