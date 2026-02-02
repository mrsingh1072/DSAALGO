//reverse a array using a single pointer using a recursion
#include<bits/stdc++.h>
using namespace std;
void swap(int &i,int &n){
    int temp=i;
    i=n;
    n=temp;
}
void f(int a[], int i, int n){
    if(i>=n/2){
        return;
    }
    swap(a[i],a[n-i-1]);
    f(a,i+1,n);
}
int main(){
    int n;
    cout<<"Enter array size:- ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\nAfter a reverse an array:- ";
    f(a,0,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0 ;
}