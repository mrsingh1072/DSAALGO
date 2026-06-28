//Move zeros to the end of an array
//brute force approach
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a size of an array:- ";
    cin>>n;
    int arr[n];
    cout<<"Enter an elements of an array:- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector <int> temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    for(int i=0;i<temp.size();i++){
        arr[i]=temp[i];
    }
    int nonzero_elemnts=temp.size();
    for(int i=nonzero_elemnts;i<n;i++){
        arr[i]=0;
    }
    cout<<"Array after all zeros push back:- ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}