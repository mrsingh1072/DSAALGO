//right shift by d position
// optimal
#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int start, int end){
    while(start<=end){
        int temp=arr[end];
        arr[end]=arr[start];
        arr[start]=temp;
        start++;
        end--;
    }
}
void rotateArray(int arr[],int n,int d){
    reverse(arr,0,n-d-1);
    reverse(arr,n-d,n-1),
    reverse(arr,0,n-1);
}
int main()
{
    int n;
    cout<<"Enter a size of an array:- ";
    cin>>n;
    int arr[n];
    cout<<"enter a elements of an array:- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cout<<"Enter a number by which rotat an array:- ";
    cin>>d;
    d=d%n;
    rotateArray(arr,n,d);
    cout<<"Array after right rotaion:- ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}