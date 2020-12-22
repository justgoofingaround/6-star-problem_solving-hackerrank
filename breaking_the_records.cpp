#include<iostream>
using namespace std;
int main()
{
    int n,min=0,max=0,temp,x,y;
    cin>>n;
    int m[n];
    for(int i=0;i<n;i++)
    {
        cin>>m[i];
    }
    x=m[0];
    y=m[0];
    for(int i=0;i<n;i++)
    { 
        if(x<m[i])
        {max++;
          x=m[i];}
        else if(y>m[i])
        {min++;
        y=m[i];}
    }
    cout<<max<<" "<<min;
    return 0;
}

