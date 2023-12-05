#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        stack<char> st;
        for(int i=0; i<str.size(); i++){
            if(str[i] != 'B' && str[i] != 'b'){
                st.push(str[i]);
            }
            else if(str[i] == 'B'){
                stack<char> temp;
                int check = 0;
                while(!st.empty()){
                    char ptr = st.top();
                    if(st.top() >= 'A' && st.top() <= 'Z' && check == 0){
                        check = 1;
                        st.pop();
                    }
                    else{
                        temp.push(ptr);
                        st.pop();
                    }
                }
                while(!temp.empty()){
                    char ptr = temp.top();
                    st.push(ptr);
                    temp.pop();
                }
            }
            else{
                stack<char> temp;
                int check = 0;
                while(!st.empty()){
                    char ptr = st.top();
                    if(st.top() >= 'a' && st.top() <= 'z' && check == 0){
                        check = 1;
                        st.pop();
                    }
                    else{
                        temp.push(ptr);
                        st.pop();
                    }
                }
                while(!temp.empty()){
                    char ptr = temp.top();
                    st.push(ptr);
                    temp.pop();
                }
            }
        }
        string ans = "";
        
        while(!st.empty()){
            char pttr = st.top();
            ans.append(1, pttr);
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}