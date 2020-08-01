#include<iostream>
using namespace std;
int main()
{   long temp;
    long arr[5],max = 0,min = 0;
    for(int i=0;i<5;i++)
    {
        cin >> arr[i];
    }
     for(int i = 0;i<24;i++)    
  {   for(int i=0;i<4;i++)
    {  
       if(arr[i]>arr[i+1])
       { temp = arr[i];
         arr[i]=arr[i+1];
         arr[i+1]=temp;
       } 
   } }
    for(int i = 0;i<4;i++)
    {  
        min += arr[i]; 
    }
   
    for(int i = 1;i<5;i++)
    {   
        max += arr[i]; 
    }
    
    cout<<min<<" "<<max;
    
    return 0;
    }
