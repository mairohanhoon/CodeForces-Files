#include<bits/stdc++.h>
using namespace std;

bool isVowel (char ch) {
    return ch == 'a' || ch == 'e';
}
 
int main() {
    
    int t;
    cin >> t;
    while(t--){
        int n;
        string str;
        cin >> n >> str;
        
        string ans = "";
        
        for (int i = n - 1; i >= 0; i--) {
            if (isVowel(str[i]) && !isVowel(str[i - 1])) {
                ans += str[i];
                ans += str[i - 1];
                ans += '.';
                i--;
            } else {
                ans += str[i];
            }
        }
        
        ans.pop_back();
        
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    
}