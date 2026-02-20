// ptint number from 1 to n
#include<bits/stdc++.h>
using namespace std;
void print_num(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    print_num(i+1,n);
}
int main(){
    int n;
    cout<<"how many time you want to print a number:-  ";
    cin>>n;
    print_num(1,n);
    return 0;
}