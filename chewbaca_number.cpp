#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
	cin>>s;
	if(s[0]!='9')
	{
		if(s[0]>='5')
		{
			s[0]=char('9'-s[0]+'0');
		}
	}
	for(int i=1;i<s.size();i++)
	{
		if(s[i]>='5')
		{
			s[i]=char('9'-s[i]+'0');
		}
	}	
	cout<<s;
    return 0;
}