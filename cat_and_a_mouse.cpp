#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,z, d1,d2;
		cin>>x>>y>>z;
		d1 = abs(x-z);
		d2 = abs(y-z);
		if(d1==d2)
		{
			cout<<"Mouse C\n";
		}
		else if(d1 > d2)
		{
			cout<<"Cat B\n";
		}
		else
		{
			cout<<"Cat A\n";
		}
	}
}
