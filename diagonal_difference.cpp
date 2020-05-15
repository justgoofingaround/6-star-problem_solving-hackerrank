#include<iostream>
using namespace std;
int main()
{
    int a,sum1=0 , sum2 = 0,diff,value;
    cin>>a;
    int ar[a][a]; 
    for (int i= 0; i<a ; i++)
    {
        for(int j = 0 ; j<a; j++)
        {
            cin>>ar[i][j];
        }
    }
    for (int i= 0; i<a ; i++)
    {
        for(int j = 0 ; j<a; j++)
        {
            if(i == j)
            sum1 += ar[i][j];
        }
    }
    for (int i= 0; i<a ; i++)
    {
        for(int j = 0 ; j<a; j++)
        {
            if((i + j) == a-1 )
            sum2 += ar[i][j];
        }
    }
    diff = sum1 - sum2;
    value = abs(diff);
    cout<<value;
    return 0; 
} 
