//charcjter hashing
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string:- ";
    cin>>s;

    //precount

int hash[26]={0};
    for(int i=0;i<s.size();i++){
    hash[s[i]-'a']++;
    }
int q;
cout<<"Enter a query:- ";
cin>>q;
while(q--){
    char c;
    cout<<"Enter a charchter:- ";
    cin>>c;
    cout<<hash[c-'a']<<endl;
}
return 0;
}