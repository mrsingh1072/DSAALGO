/*
take the age from the user and then decide accordingly
1. if age<18,
print->not eligible for job
2. if age>=18,
print->"eligible for job"
3. if age>=55 and age <=57,
print->"eligible for job, but retirement soon."
4. if age >57
print->"retirement time"
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cin>>age;
    if(age<18)
    {
        cout<<"Not eligible for any job"<<endl;
    }
    else if(age>=55&&age<=57)
    {
        cout<<"Eligible for job, but retirement time."<<endl;
    }
    else if(age>57)
    {
        cout<<"Retirement Time."<<endl;
    }
    else
    {
        cout<<"Eligible for job"<<endl;
    }
    return 0;
}