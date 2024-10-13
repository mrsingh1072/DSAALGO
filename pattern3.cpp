/*
print pattern
1
12
123
1234
12345
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout << j ;
            //i++;     
        }
        cout<<endl;
    }
    return 0;
}