#include <iostream>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    long long int ar[a],sum=0;
    for( int i =0 ; i<a; i++)
    {
        cin>>ar[i];
    }
    for( int i =0 ; i<a; i++)
    {
        sum += ar[i];
    }
    cout<<sum;
}
