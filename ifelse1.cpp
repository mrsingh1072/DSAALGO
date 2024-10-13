//wrap and takes inputs age and then check the person is adult or not
#include<bits/stdc++.h>
using namespace std;
void show()
{
    int n=35;
    for(int i=2;i<n;i++)
    {
        cout<<"let check : "<<i<<endl;
    }
}
int main()
{
    int x;
    cin>>x;
    if(x>=18)
    {
        cout<<"The person is adult"<<endl;
    }
    else
    {
        cout<<"person is not an adult"<<endl;
    }
    return 0;
}