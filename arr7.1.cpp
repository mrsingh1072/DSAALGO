//Reverse an array by d place
// optimal solution
#include<iostream>
using namespace std;
void  reverse(int arr[], int start, int end){
    while(start<=end){
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
    }
}
void reverseArray(int arr[], int n, int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
int main(){
    int n;
    cout<<"Enter a size of an array:- ";
    cin>>n;
    int arr[n];
    cout<<"Enter a elemets of an array:- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cout<<"Enter d elemts to rotate an array:- ";
    cin>>d;
    d=d%n;
    reverseArray(arr,n,d);
    cout<<"Array after the rotation:- ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}