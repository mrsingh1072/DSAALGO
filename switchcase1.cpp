/*
take the day number and print the corresponding day
for 1: print Monday,
for 2 print Tuesday and so on for 7 print sunday.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int day;
    cin>> day;
    switch(day){
        case 1:
        {
            cout<<"Sunday"<<endl;
            break;
        }
        case 2:
        {
            cout<<"Monday"<<endl;
            break;
        }
        case 3:
        {
            cout<<"Tuesday"<<endl;
            break;
        }
        case 4:
        {
            cout<<"Wednesday"<<endl;
            break;
        }
        case 5:
        {
            cout<<"Thursday"<<endl;
            break;
        }
        case 6:
        {
            cout<<"Friday"<<endl;
            break;
        }
        case 7:
        {
            cout<<"Saturday"<<endl;
            break;
        }
        default:
        {
            cout<<"invalid day number"<<endl;
        }
    }
    return 0;
}