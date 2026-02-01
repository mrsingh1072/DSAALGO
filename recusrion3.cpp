#include<bits/stdc++.h>
using namespace std;
void print_num(int i,int n){
    if(n>i){
        return;
    }
    cout<<n;
    print_num(n-1,i);
}
int main(){
    int n;
    cout<<"enter a number freom where to print a number:- ";
    cin>>n;
    print_num(n,1);
    return 0;
}