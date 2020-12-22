#include<iostream>
#include<math.h>
using namespace std;
int mini(int a,int b)
{
    if(a>=b)
    {
        return b;
    }
    else 
    {
        return a;
    }
}
int main()
{
    int n,p;
    cin>>n>>p;
    int a = p/2;
    int b = (n-p)/2;
    if(n%2==0&&p!=n&&p%2!=0)
    {
       b+=1; 
    }
    int min = mini(a,b);
    cout<<min;
}

