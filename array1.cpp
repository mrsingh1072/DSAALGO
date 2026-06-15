//find the largest elemetns from the array
#include<iostream>
using namespace std;
int f(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot&&i<=high){
            i++;
        }
        while(arr[j]>pivot&&j>=low){
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
void quick_sort(int arr[],int low, int high){
    if(low<high){
        int partion=f(arr,low,high);
        quick_sort(arr,low,partion-1);
        quick_sort(arr,partion+1,high);
    }
}
int main(){
    int n;
    cout<<"Enter a size of an array:- ";
    cin>>n;
    cout<<"Enter array elements:- ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0;
    int high=n-1;
    quick_sort(arr,low,high);
    cout<<"array after the sorting:- ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Largest elemsts of the array is:- "<<arr[n-1]<<endl;
    return 0;
}