// right shift by d
// brutefore approach
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a size of an array:- ";
    cin>>n;
    int arr[n];
    cout<<"Enter a size of an array:- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cout<<"Enter d for rotate an elements:- ";
    cin>>d;
    d=d%n;
    int temp[d];
    int j=0;
    for(int i=n-d;i<n;i++){
        temp[j]=arr[i];
        j++;
    }
    for(int i=n-d-1;i>=0;i--){
        arr[i+d]=arr[i];
    }
    for(int i=0;i<d;i++){
        arr[i]=temp[i];
    }
    cout<<"array after right rotation:- ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}