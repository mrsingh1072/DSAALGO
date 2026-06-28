//Move zeros to the end of an array
//optimal solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a size of an array:- ";
    cin>>n;
    int arr[n];
    cout<<"Enter an elemts of an array:- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
        
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
    cout<<"Array after all elemnts push back:- ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}