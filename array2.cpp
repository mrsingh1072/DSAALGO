//find the second largest (better approach)
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
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    int second_largest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>second_largest&&arr[i]!=largest){
            second_largest=arr[i];
        }
    }
    cout<<"Second largest of an array is:- "<<second_largest;
    return 0;
}