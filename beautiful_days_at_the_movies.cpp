#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, j, k;
	cin>>i>>j>>k;
	int ans=0;
	for(int l=i;l<=j;l++)
	{ 
		int temp = l, rem=0, num=0;
		while(temp!=0)
		{
			rem = temp % 10;
			num = num*10 + rem;
			temp/=10;
		}
		int d = abs(l - num);
		cout<<"d = "<<d<<"\n";
		if(d%k==0)
		{
			ans++;
		}
	}
	cout<<ans<<"\n";
}
