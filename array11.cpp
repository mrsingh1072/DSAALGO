//linear search
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a size of an array:- ";
    cin>>n;
    int arr[n];
    cout<<"nter an elemts of an array:- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int nums;
    bool found=false;
    cout<<"Enter a number to search the number is exit or not:- ";
    cin>>nums;
    for(int i=0;i<n;i++){
        if(arr[i]==nums){
            cout<<"Elemts found at index "<< i <<endl;
            found=true;
        }
        
    }
    if(!found){
        cout<<"Elemts not found";
    }
    return 0;
}