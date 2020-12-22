#include<iostream>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    int orig[a],m[a];
    for (int i=0;i<a;i++)
    {
        cin>>orig[i];
        m[i]=orig[i];
        
    }
    
    for(int i=0;i<a;i++)
{ 
        if(orig[i]>37)
     {   
         for(int j=1;j<6;j++)
       {if(m[i]%5!=0)
       {
           m[i]++;
       }}
      if(m[i]-orig[i] < 3)
      {
          orig[i]=m[i];
      }
    }}
      for(int i=0;i<a;i++)
      {
          cout<<orig[i];
          if(i<a-1)
          {
              cout<<"\n";
          }
      }
    return 0;
}



