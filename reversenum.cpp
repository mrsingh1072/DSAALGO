#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num=0;
    while(n>0){
        int last_digit=n%10;
        n=n/10;
        num=(num*10)+last_digit;
    }
    cout<<num;
    
    return 0;
}