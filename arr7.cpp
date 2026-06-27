// left rotate array by D position
// solved it by brute force approach
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a size of an array:- ";
    cin>>n;
    int arr[n];
    cout<<"elements of an array:- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter d elments to rotate:- ";
    int d;
    cin>>d;
    d=d%n;
    
    // Push back d elemnts in temp
    int temp[d];

    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }

    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }

    int j=0;
    for(int i=n-d;i<n;i++){
        arr[i]=temp[j];
        j++;
    }
    cout<<"array after d rotation:- ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}