/*
print pattern like this:-
1
22
333
4444
55555
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}