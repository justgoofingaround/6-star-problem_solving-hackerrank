#include <iostream>
using namespace std;
int main()
{
    int s,t,a,b,count1=0,count2=0,m,n;
    cin>>s>>t>>a>>b>>m>>n;
    int a1[m],a2[n];
    for(int i=0;i<m;i++)
    {
        cin>>a1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>a2[i];
    }
    for(int i=0;i<m;i++)
    {
        a1[i]=a1[i]+a;
    }
    for(int i=0;i<m;i++)
    {
        if(a1[i]>=s&&a1[i]<=t)
        count1++;
    }
    for(int i=0;i<n;i++)
    {
        a2[i]=a2[i]+b;
    }
      for(int i=0;i<n;i++)
    {
        if(a2[i]>=s&&a2[i]<=t)
        count2++;

    }
    cout<<count1<<"\n"<<count2;

}
