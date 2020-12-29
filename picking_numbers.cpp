#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int count=0,l=0,r=0,maxc=0;
	for(int i = 0; i<n; i++)
	{
		if((a[r]-a[l])<=1)
		{
			count++;
			r++;
		}
		else
		{
			count=0;
			l = r;
		}
		if(count>maxc)
		{
			maxc=count;
		}
	}
	cout<<maxc<<"\n";
	
}
