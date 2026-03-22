/*
print the pattern
*
**
***
****
***
**
*
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n=4;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}