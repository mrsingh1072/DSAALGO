//insertion of an array
// we will apply brute force what we will do w will chcek both array if the arr[i]==arr2[j] then that no. we will add in different array and arr2[j] w willl mark visited
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    cout<<"Enter a size of a first array:- ";
    cin>>n1;
    int arr1[n1];
    cout<<"Enter a elemnts of first array:- ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int n2;
    cout<<"Enter a size of a second array:- ";
    cin>>n2;
    int arr2[n2];
    cout<<"Enter a elemnts of a second array:- ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    vector<int> itnersectionArray;
    int visted[n2]={0};
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]&&visted[j]==0){
                itnersectionArray.push_back(arr1[i]);
                visted[j]=1;
                break;
            }
            if(arr2[j]>arr1[i]) break;
        }
    }
    cout<<"New array after the insertion:- ";
    for(int i=0;i<itnersectionArray.size();i++){
        cout<<itnersectionArray[i]<<" ";
    }
    return 0;
}