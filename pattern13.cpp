/*
print the pattern like  this
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n=5;
    int num=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {

            cout<<" "<< num ;
            num++;
        }
        cout<<endl;
    }
    return 0;
}