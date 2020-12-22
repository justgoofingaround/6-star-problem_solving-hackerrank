#include<iostream>
using namespace std;
int main()
{
    int n,count = 0,valley=0,isValley=false;
    cin>>n;
    char ch[n];
    for(int i=0;i<n;i++)
    {
        cin>>ch[i];
    }
    for(int i=0;i<n;i++)
    {
        if(ch[i] == 'U')
        {
            count++;
        }  
        else
        {
            count--;
        }
        if(!isValley && count<0)
        {
            isValley = true;
        }
        if(isValley && count==0)
        {
            valley++;
            isValley = false;
        }
    }
    cout<<valley;
return 0;
}

