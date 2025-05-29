#include<iostream>
using namespace std;

class Time;
Time addTime(Time, Time);
class Time
{
    int hr, min, sec;
    public:
        void set();
        void display();
        friend Time addTime(Time,Time)
};
