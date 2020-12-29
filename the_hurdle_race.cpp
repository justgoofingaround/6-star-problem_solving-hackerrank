	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int count=0;
		sort(a,a+n);
		if(a[n-1] > k)
			count += a[n-1] - k;
		cout<<count<<"\n";
	}
