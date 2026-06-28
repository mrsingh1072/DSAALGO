//linear ssearch using vector
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a size of an array:- ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target elemts:- ";
    cin>>target;
    bool found=false;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target){
            cout<<"Target found at index "<<i<<endl;
            found=true;
        }
    }
    if(!found){
        cout<<"Elemts are not found";
    }
    return 0;
}