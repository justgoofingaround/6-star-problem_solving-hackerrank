#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,pair=0,flag,start=0,end=start+1;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar, ar+n);
    for(int i=0;i<n;i++)
    {
       if(ar[start] == ar[end])
       {
           end++;
           if((start - end)%2==0)
           {
               pair++;
           }
       }
       else 
       {
           start = end;
           end = start + 1;
       }
    }
    cout<<pair;

}

