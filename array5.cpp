//remove duplicate from an array(brute force)
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> st;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int index=0;
    for(auto it:st){
        arr[index]=it;
        index++;
    }
    for(int i=0;i<index;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}