//number hashing using map
#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cout<<"Enter a size of an array:- ";
    cin>>n;
    int arr[n];
    cout<<"Enter array:- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int q;
    cout<<"Enter a quer:- ";
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter a number:- ";
        cin>>number;
        cout<<mpp[number]<<endl;
    }
    return 0;
}