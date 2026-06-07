#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            count=count+1;
            if((n/i)!=i){
            count=count+1;
        }
        }
    }
    if(count==2){
        cout<<" it is a prime number";
    }
    else{
        cout<<"not a prime number";
    }
    return 0;
}