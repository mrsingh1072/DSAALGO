//insertion
#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0&&arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}
int main(){
    int n;
    cout<<"Enter a  size of array:- ";
    cin>>n;
    int arr[n];
    cout<<"Array is:- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    cout<<"Array after sorting:-";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}