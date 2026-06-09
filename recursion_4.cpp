//print i to n using backtracking recursion,
#include<iostream>
using namespace std;
void f(int n){
    if(n<1){
        return;
    }
    f(n-1);
    cout<<n<<endl;
    
}
int main(){
    int n;
    cin>>n;
    f(n);
}