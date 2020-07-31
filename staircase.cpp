#include <iostream>
using namespace std;
int main()
{
    int rows;
    cin >> rows;
    for(int i = 1; i <= rows; ++i)
    {   for(int s=0;s<rows-i;s++)
        cout<<" ";
        for(int j = 1; j <= i; ++j)
        {
            cout << "#";
        }
        if(i<rows)
        cout << "\n";
    }
    return 0;
}
