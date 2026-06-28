//Find the union of the array 
//we use brute force
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    cout<<"Enter a size of a first array:- ";
    cin>>n1;
    cout<<"Enter elemts of a first array:- ";
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int n2;
    cout<<"Enter a size of a second array:- ";
    cin>>n2;
    int arr2[n2];
    cout<<"Enter elemts of a second array:- ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    set<int> st;
    for(int i=0;i<n1;i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(arr2[i]);
    }
    int unique[st.size()];
    int i=0;
    vector<int> temp;
    for(auto it:st){
        unique[i++]=it;
        temp.push_back(it);
    }
    cout<<"Union of a two array is:- ";
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}