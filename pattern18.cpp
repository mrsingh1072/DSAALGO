/*
print patter like this:-
E
DE
CDE
BCDE
ABCDE
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n=5;
    char ch='E';
    for(i=1;i<=n;i++)
    {
        for(ch='E'-(i-1);ch<='E';ch++)
        {
            //ch='E'-1;
            //ch='A'+(j-1);
            cout<<ch;
            //ch++;
        }
        //ch='A'+(j-1);
        //ch++;
        cout<<endl;
    }
    return 0;
}