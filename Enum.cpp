#include<iostream>
using namespace std;
enum Days{
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};
int main()
{
    Days d1,d2;
    d1=sunday;
    d2=monday;
    cout<<"the enum value of the first day is:"<<d1<<endl;
    cout<<"the enum value of the second day is:"<<d2;
    return 0;
}
