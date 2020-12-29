#include<bits/stdc++.h>
using namespace std;
int main()
{
	int b, n, m;
	cin>>b>>n>>m;
	int a[n],c[m];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>c[i];
	}
	int s = n*m;
	int t[s];
	int co=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			t[co] = a[i] + c[j];
			co++;
		}
	}
	sort(t, t+s);
	
	int ans=-1;
	for(int i=0;i<s;i++)
	{
		if(t[i]<=b)
		{
			ans = t[i];
		}
	}
	if(ans>0)
	{
		cout<<ans<<"\n";
	}
	else
	{
		cout<<"-1\n";
	}
}
