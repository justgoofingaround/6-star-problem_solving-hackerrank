#include<iostream>
using namespace std;
int main()
{
    int n,move = 0;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i] == 0 && ar[i+2] == 0)
        {
            move++;
            i=i+1;
        }
        else if(ar[i] == 0 && ar[i+2] == 1)
        {
            move++;
        }
    }
    cout<<move<<"\n";
    return 0;
}

