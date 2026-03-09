//print names 5 times
#include<bits/stdc++.h>
using namespace std;

void name(int count){
    if(count==5){
        return;
    }
    cout<<"saurabh singh"<<endl;
    name(count+1);
}
int main(){
    name(0);
}