//print from 1 to n
#include<iostream>
using namespace std;
void f(int n,int i){
    if(i>n){
        return;
    }
    else{
        cout<<i<<endl;
        f(n,i+1);
    }
}
int main(){
    int n;
    int i=1;
    cin>>n;
    f(n,i);
    return 0;
}