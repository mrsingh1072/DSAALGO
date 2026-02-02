//check a string is palindrome or not
#include<bits/stdc++.h>
using namespace std;
bool f(int i, string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]){
        return false;
    }
    return f(i+1,s);
}
int main(){
    string s;
    cout<<"Enter a string:- ";
    getline(cin, s);
    //cout<<"After palindrome check";
    cout<<f(0,s);
}