//Number hashing
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a size of an array:- ";
    cin>>n;
    int arr[n];
    cout<<"Enter a array:- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //precompute
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    //prehashing
    int q;
    cout<<"Enter your query:- ";
    cin>>q;
    while(q--){
        int number;
        cout<<"ENter a number to search:- ";
        cin>>number;
        cout<<"The "<<number<<" appear "<<hash[number]<<" Times"<<endl;
    }
    return 0;
}