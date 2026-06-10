#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int minim=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[minim]){
                minim=j;
            }
        }
        int temp=arr[minim];
        arr[minim]=arr[i];
        arr[i]=temp;
    }
}
int main(){
    int n;
    cout<<"Enter size of an array:- ";
    cin>>n;
    int arr[n];
    cout<<"Enter array before sorting:- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    cout<<"Array after the selection sort:- ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}