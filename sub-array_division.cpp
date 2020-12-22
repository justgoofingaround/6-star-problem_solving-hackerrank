#include<iostream>
using namespace std;
int main()
{ 
    int n,d,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>d>>m;
     int counter=0;
    for(int i=0; i<=n-m; i++){
        int sum=0;
        for(int j=i; j<i+m; j++){
            sum += a[j];
        }
        if(sum == d){
            counter++;
        }

    }
    cout<<counter;
    return 0;


}

