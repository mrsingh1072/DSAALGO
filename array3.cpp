//check if the array is sorted or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a size of an array:- ";
    cin>>n;
    int arr[n];
    bool sorted =true;
    cout<<"Enter a elemtsnts of an array:- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            sorted =false;
            break;
        }
    }
    if(sorted){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
    return 0;
}