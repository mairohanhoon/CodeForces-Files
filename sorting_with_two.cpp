#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		 bool ch = true;
		for(int i=1;i<n;i++)
		{
			if(a[i-1]>a[i])
			{
				if( i!=1 && i!=2 &&  i!=4 &&  i!=8 &&  i!=16 )
				{	
					ch = false;
					break;
				}

			}
		}
		if( ch == true)
		cout<<"YES" << endl;
		else
		cout<<"NO" << endl;
	}
}