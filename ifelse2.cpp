/*school ha sfollowing rules for grading systems.
a. below 25 - F
b. 25-44 - E
c. 45-49 - D
d. 50-59 - C
e. 60-79 - B
f. 80-100 - A
ask user to enter the marks and print the corresponding grade.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<""hellow";
    cin >> n;

    if(n<25)
    {
        cout<<"the person got 'F' grade"<<endl;
    }
    else if (n>=25 && n<=44)
    {
        cout<<"The person got 'E' grade"<<endl;
    }
    else if (n>=45&&n<=49)
    {
        cout<<"The person got 'D' grade"<<endl;
    }
    else if(n>=50&&n<=59)
    {
        cout<<"The person got 'C' grade"<<endl;
    }
    else if(n>=60&&n<=79)
    {
        cout<<"The person got 'B' grade"<<endl;
    }
    else if(n>=80&&n<=100)
    {
        cout<<"The person got 'A' grade"<<endl;
    }
    return 0;

}
