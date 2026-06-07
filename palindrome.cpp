#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int original_num=n;
    int num=0;
    while(n>0)
    {
        int digit=n%10;
        num=(num*10)+digit;
        n=n/10;
    }
    if(original_num==num){
            cout<<"it is palindrome";
        }
        else{
            cout<<"Not palindrome";
        }
}