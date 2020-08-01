#include <bits/stdc++.h>
#include<string>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
void timeConversion(string s) { 
    int a = (int)s[0] - '0';
    int b = (int)s[1] - '0';
    int convert = a*10 + b;
    int fcon= convert +12;
    if (s[8]=='P')
    {   if(fcon==24)
        {
            
            cout<<"12";
        }
        else 
        cout<<fcon;
             
          for(int i=2;i<8;i++)
      {
        cout<<s[i];
      }
    }
    else 
   {
     if(convert == 12)
     {cout<<"00";
      for(int i=2;i<8;i++)
      {
        cout<<s[i];
      }}
     else {   
    for(int i=0;i<8;i++)
    {
        cout<<s[i];
    }}
}  
    
}

int main()
{
    string s;
    getline(cin, s);

    timeConversion(s);
    
    

    return 0;
}
