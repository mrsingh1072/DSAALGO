//printing fibonanci
#include<iostream>
using namespace std;
int fibonaci(int n){
    if(n<=1){
        return n;
    }
    int f_last=fibonaci(n-1);
    int s_last=fibonaci(n-2);
    return f_last+s_last;
    
}
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    cout<<fibonaci(n);
    return 0;
}