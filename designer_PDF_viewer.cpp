#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ch[26];
	for(int i=0;i<26;i++)
	{
		cin>>ch[i];
	}
	string s;
	cin>>s;
	int len = s.length();
	int max=0,temp=0;
	sort(s.begin(), s.end());
	int j=0;
	for(int i=0;i<26;i++)
	{
		if( (s[j] - 'a') == i )
		{
			temp = ch[i];
			j++;
		}
		if(temp > max)
		{
			max = temp;
		}
		if(s[j-1] == s[j])
		{
			i--;
		}
	}
	cout<<len*max<<"\n";
}
