#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int c[n];
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
	}
	int ans = 100;
	for(int i=0;i<n;i++)
	{
		if(c[i]==1)
		{
			ans-=3;
		}
		else
		{
			ans--;
		}
		i = i + k - 1;
	}
	cout<<ans<<"\n";
}
