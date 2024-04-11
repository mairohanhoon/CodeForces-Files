#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        long long count = 0;
        long long i = 0;
        long long j = n-1;
        while(i < j && k > 0){
            long long minni = min(v[i], v[j]);
            //cout << "minni: " << minni << endl;
                if(minni <= k/2){
                    if(v[i] == minni){
                        v[i] = 0;
                        i++;
                        count++;
                        
                    }
                    else{
                        v[i] -= minni;
                    }
                    if(v[j] == minni){
                        v[j] = 0;
                        j--;
                        count++;
                    }
                    else{
                        v[j] -= minni;
                    }
                    k -= 2*minni;
                    if(k == 0){
                        break;
                    }
                }
                else{
                    break;
                }
            //cout << count << " ??" << endl;
        }
        if(k > 0){
            if( i == j){
                if(v[i] <= k){
                    count++;
                }
            }
            else{
                if(k%2==0){
                    if(min(v[i], v[j]) <= k/2){
                        count++;
                    }
                }
                else{
                    if(v[i]-1 == k/2){
                        count++;
                    }
                    if(v[j] == k/2){
                        count++;
                    }
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}