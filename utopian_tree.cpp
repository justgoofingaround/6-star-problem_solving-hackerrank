#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int c=1;
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			if(i%2==0)
			{
				c*=2;
			}
			else
			{
				c+=1;
			}
		}
		cout<<c<<"\n";
	}
}
