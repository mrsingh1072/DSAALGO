/*
print this pattern:-
   A
  ABA
 ABCBA
ABCDCBA
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n=5;
    char ch='A';
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            ch='A'+k-1;
            cout<<ch;
        }
        for(k=i-1;k>=1;k--)
        {
            ch='A'+k-1;
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}