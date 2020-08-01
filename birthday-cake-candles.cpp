#include<iostream>
using namespace std;
int main()
{
    long a,max,count=0,temp;
    cin>>a;
    int ar[a];
    for(int i=0;i<a;i++)
    {
        cin>>ar[i];
    }
    
    temp = ar[0];
    for (int j =0;j<100;j++)
    {for(int i=1;i<a;i++)
    {   if (temp>ar[i])
        {
            max = temp;
        }
        else if(temp<ar[i])
          temp = ar[i];
          max = temp;
    }}
    for (int i=0;i<a;i++)
    {
        if(ar[i]==max)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
} 
