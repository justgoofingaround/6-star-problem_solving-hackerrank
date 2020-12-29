#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ans = 5;
	int t=5, sum=0;
	for(int i=0;i<n;i++)
	{
		ans = ans / 2;
		sum+=ans;
		ans *= 3;
	}
	cout<<sum<<"\n";
}
