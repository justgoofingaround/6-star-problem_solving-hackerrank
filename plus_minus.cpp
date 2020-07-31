#include<iostream>
using namespace std;
int main()
{
    int a;
    float e=0,f=0,g=0;
    float b,c,d;
    cin>>a;
    int ar[a];
    for(int i=0;i<a;i++)
    {
        cin>>ar[i];
    }
    for(int i = 0; i<a;i++)
    {
        if(ar[i]>0)
        e++;
        else if(ar[i]<0)
        f++;
        else 
        g++;
    }
    b = e/a;
    c = f/a;
    d = g/a;
    cout<<b<<"\n"<<c<<"\n"<<d;
    return 0;
}
