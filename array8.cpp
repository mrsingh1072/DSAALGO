// right rotaion by 1;
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a size of an array :- ";
    cin>>n;
    int arr[n];
    cout<<"Enter a elements of an array:- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp=arr[n-1];
    for(int i=n-2;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
    cout<<"Array after right rotation by ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}