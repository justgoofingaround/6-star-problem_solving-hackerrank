#include<iostream>
using namespace std;
int main()
{
    int n,b;
    cin>>n>>b;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int bg;
    cin>>bg;
    int avg = 0;
    for(int i=0;i<n;i++)
    {
        if(i!=b)
        {    avg+=a[i];
        }        
    }
    avg/=2;
    if(bg==avg)
    {
        cout<<"Bon Appetit";
    }
    else 
    {
        cout<<bg-avg;
    }
    return 0;
}

