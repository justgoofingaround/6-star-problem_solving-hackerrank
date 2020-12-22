#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long int n,count=0,extra=0;
    cin>>n;
    long int size = s.size();
    for(int i=0;i<size;i++)
    {
        if(s[i]=='a')
        {
            count++;
        }
    }
    for(int i=0;i<n%size;i++)
    {
        if(s[i]=='a')
        {
            extra++;
        }
    }
    cout<<(n/size * count) + extra<<endl;
    return 0; 
}

