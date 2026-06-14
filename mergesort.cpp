#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    int temp[100];
    int left=low;
    int right=mid+1;
    int k=0;
    while(left<=mid&&right<=high){
        if(arr[left]<=arr[right]){
            temp[k]=arr[left];
            left++;
            k++;
        }
        else{
            temp[k]=arr[right];
            right++;
            k++;
        }
    }
    while(left<=mid){
        temp[k]=arr[left];
        left++;
        k++;
    }
    while(right<=high){
        temp[k]=arr[right];
        right++;
        k++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
void mergesort(int arr[],int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){
    int n;
    
    cout<<"Enter a size of an array:- ";
    cin>>n;
    int low=0;
    int high=n-1;
    int arr[n];
    cout<<"Enter a array number:- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,low,high);
    cout<<"Array after merge sort:- ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}