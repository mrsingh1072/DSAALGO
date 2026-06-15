//find largest elemets from an array (optimal approach)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a size of an array:- ";
    cin>>n;
    int arr[n];
    cout<<"Elements of an array:- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"Largest elements from an array is:- "<<largest;
    return 0;
}