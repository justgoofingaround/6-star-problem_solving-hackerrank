#include<iostream>
using namespace std;
int main()
{
    int x1,v1,x2,v2,c=0;
        cin>>x1>>v1>>x2>>v2;
    if(x1<x2&&v1<v2||x1>x2&&v1>v2)
    {
        cout<<"NO";
    }
    else 
    {    for(int i=0;i<10000;i++)
      {
        x1 = x1+v1;
        x2 = x2+v2;
        if(x1 == x2)
           { c=1;
             break;}

      

      }  
       if(c==1)
       cout<<"YES";
       else
       cout<<"NO";
    }
    
         
         return 0;
}

