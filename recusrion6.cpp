//print a sum of n number by parametrised way
#include<bits/stdc++.h>
using namespace std;
void f(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    f(i-1,sum+i);
}
int main(){
    int n;
    cout<<"Enter a number to get a sum:- ";
    cin>>n;
    f(n,0);
}