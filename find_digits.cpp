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
		int temp = n;
		int count=0;
		while(temp>0)
		{
			int rem = temp % 10;
			temp = temp/10;
			cout<<"rem = "<<rem<<"\n";
			if(rem!=0 && n%rem == 0 )
			{
				count++;
			}
		}
		cout<<count<<"\n";
	}
}
