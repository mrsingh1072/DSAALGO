//print sum of n number by functional way;
#include<bits/stdc++.h>
using namespace std;
int f(int i){
    if(i==0){
        return 0;
    }
    else{
        //i+f(i-1);
        return i+f(i-1);
    }
}
int main(){
    int n;
    
    
    cout<<"Enter a number to get a sum:- ";
    cin>>n;
    cout<<f(n);;
}