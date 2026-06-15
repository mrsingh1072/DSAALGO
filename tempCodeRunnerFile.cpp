#include<iostream>
using namespace std;
int f(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(i<=high-1&&arr[i]<=pivot){
            i++;
        }
        while(j>=low+1&&arr[j]>pivot){
            j--;
        }

         if(i<j){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
        int temp=arr[j];
        arr[j]=arr[low];
        arr[low]=temp;
        return j;
}
void qs(int arr[],int low,int high){
    int i=low;
    int j=high;
    if(i<j){
        int partion=f(arr,low,high);
        qs(arr,low,partion-1);
        qs(arr,partion+1,high);
    }
}
int main(){
    int n;
    cout<<"Enter a size of an array:- ";
    cin>>n;
    int low=0;
    int high=n-1;
    int arr[n];
    cout<<"Enter aray number:- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    qs(arr,low,high);
    cout<<"Array after a Quick Sort:- ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}