#include<iostream>
using namespace std;
class Time;
Time add(int, int, int);
class Time
{
    int hr, min, sec;
    public:
        void input();
        void display();;
        friend  TIme add(int, int, int);
};
int main()
{
    
}