//find the second largest elements from an array(optimal approach)
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
    int second_largest=INT16_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest&&arr[i]>second_largest){
            second_largest=arr[i];
        }
    }
    cout<<"Second largest elements of an array is:- "<<second_largest;
    return 0;
}