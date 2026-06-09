//print name 5 times
#include<iostream>
using namespace std;
void f(string s, int count,int n){
    
    if(count>n){
        return;
    }
    else{
        cout<<s<<endl;
        f(s,count+1,n);
    }
}
int main(){
    int count=1;
    int n;
    cout<<"enter a number:- ";
    cin>>n;
    string s;
    cout<<"enter a name";
    cin>>s;
    f(s,count,n);
}