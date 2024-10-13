/*
print pattern like this:-
A
BB
CCC
DDDD
EEEEE
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n=5;
    char ch='A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<ch;
        }
        ch='A'+(j-1);
        cout<<endl;
    }
    return 0;
}