/*
print pattern like this:-
* * * * * 
* * * * 
* * * 
* * 
*
*/




#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}