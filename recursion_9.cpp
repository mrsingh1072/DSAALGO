//check string is palindrome or not
#include<iostream>
using namespace std;
void check_palindrome(int i,string s){
    if(i>=s.size()/2){
        cout<<"it is palindrome";
        return;
    }
    if(s[i]!=s[s.size()-i-1]){
        cout<<"Not a palindrome";
        return;
    }
    
    check_palindrome(i+1,s);
}
int main(){
    string s;
    cout<<"Enter a string ";
    cin>>s;
    check_palindrome(0,s);
    return 0;
}