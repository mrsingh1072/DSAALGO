/*
print pattern like this:-
12345
1234
123
12
1
*/






#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
            //i--;
        }
        cout<<endl;
    }
    return 0;
}