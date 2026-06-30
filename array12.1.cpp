//union of a sorted array
// here we apply a optimal solution where we will apply two pointer approach
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    cout<<"Enter a size of an array:- ";
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int n2;
    cout<<"Enter a size of an array:- ";
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int i=0;
    int j=0;
    vector<int> unionarray;
    while(i<n1&&j<n2){
        if(arr1[i]<arr2[j]){
            if(unionarray.size()==0||unionarray.back()!=arr1[i]){
                unionarray.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(unionarray.size()==0||unionarray.back()!=arr2[j]){
                unionarray.push_back(arr2[j]);
            }
            j++;
        }
    }
        while(i<n1){
            if(unionarray.size()==0||unionarray.back()!=arr1[i]){
                unionarray.push_back(arr1[i]);
            }
            i++;
        }
        while(j<n2){
            if(unionarray.size()==0||unionarray.back()!=arr2[j]){
                unionarray.push_back(arr2[j]);
            }
            j++;
    }
    cout<<"Union of two array is :- ";
    for(int i=0;i<unionarray.size();i++){
        cout<<unionarray[i]<<" ";
    }
    return 0;
}