#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    int a[n];
    int count[6] = {0};
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);

    for(int i=1;i<=n;i++)
    {
        count[a[i]] = 1;
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]==a[i+1])
        {
            count[a[i]] = count[a[i]] + 1;
        }
    }

    int max = count[1];
    int ind = 1;
    for(int i=1;i<=5;i++)
    {
        if(max<count[i])
        {
            max = count[i];
            ind = i;
        }
    }
    cout<<ind;
    
}

