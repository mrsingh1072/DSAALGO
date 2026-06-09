//from n to 1 using backtracking
#include<iostream>
using namespace std;
void f(int n){
    if(n<1){
        return;
    }
    cout<<n<<endl;
    f(n-1);
}
int main(){
    int n;
    cin>>n;
    f(n);
}