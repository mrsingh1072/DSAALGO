//reverse an array using two pointer by recursive
#include<bits/stdc++.h>
using namespace std;
void swap(int &l,int &r){
    int temp=l;
    l=r;
    r=temp;
}
void f(int a[],int l, int r){
    if(l>=r) return;
    swap(a[l],a[r]);
    f(a,l+1,r-1);
}
int main(){
    int n;
    cout<<"Enter a size of an array:- ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    f(a,0,n-1);
    cout<<"After Reverse:- "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}