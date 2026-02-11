//print a number from n to 1 using recusrion by backtrack method




#include<bits/stdc++.h>
using namespace std;
void f(int i,int n){
    if(i>n){
        return;
    }
    f(i+1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cout<<"Enter a number you want to start:- ";
    cin>>n;
    f(1,n);
}