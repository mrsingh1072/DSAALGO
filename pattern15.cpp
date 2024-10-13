/*
print pattern like this:-
ABCDE
ABCD
ABC
AB
A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n=5;
    char ch='A';
    for(i=5;i>=1;i--)
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