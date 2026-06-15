//remove a duplicate from the sorted array(optimal)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a size of an array:- ";
    cin>>n;
    int arr[n];
    cout<<"Enter a elements of an array:- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout<<"array size is "<<i+1;
    cout<<"elemnts in array is:- ";
    for(int k=0;k<i+1;k++){
        cout<<arr[k] <<" ";
    }
    return 0;
}