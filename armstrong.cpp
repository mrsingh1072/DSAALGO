#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int digits=0;
    int temp=n;
    while(temp>0){
        digits++;
        temp=temp/10;
    }
    int original_num=n;
    while(n>0){
        int digit=n%10;
        sum=sum+pow(digit,digits);
        n=n/10;
    }
    if(sum==original_num){
        cout<<"armstrong number";
    }
    else{
        cout<<"not a armstrong number";
    }
}