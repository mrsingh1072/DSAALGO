/*
print the pattern like this:-
A
AB
ABC
ABCD
ABCDE
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n=5;
    char ch='A';
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            ch='A'+(j-1);
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}