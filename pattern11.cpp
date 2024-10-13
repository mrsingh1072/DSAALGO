/*
print this pattern
1
01
101
0101
10101
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n=5;
    int start;
    for(i=1;i<=n;i++)
    {
        if(i==n%2)
        {
            start=1;
        }
        else
        {
            start=0;
        }
        for(j=1;j<=i;j++)
        {
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
    return 0;

}