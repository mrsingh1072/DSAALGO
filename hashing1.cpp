#include<iostream>
using namespace std;
int search(int arr[],int n, int j){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==j){
            count=count+1;
            //return count;
        }
        
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter a size of a array:- ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j;
    cout<<"Enter a number to search:- ";
    cin>>j;
    cout<<"The number present in the list is "<<search(arr,n,j)<<" times";
    return 0;

}