#include<iostream>
using namespace std;

class Time
{
    int hr;
    int min;
    int sec;
    public:
        void input();
        void display();
        void addTime(Time t1, Time t2);
};
void Time::input()
{
    cout<<"enter hr:";
    cin>>hr;
    cout<<"enter minutes:";
    cin>>min;
    cout<<"enter second:";
    cin>>sec;
}
void Time::display()
{
    cout<<"hr:"<<hr<<"\nmin:"<<min<<"\nsec"<<sec<<endl;
}
void Time::addTime(Time t1, Time t2)
{
    sec=t1.sec+t2.sec;
    min=t1.min+t2.min;
    hr=t1.min+t2.hr;
    if(sec>=60){
        min=min+sec/60;
        sec%=60;
    }
    if(min>=60){
        hr=hr+min/60;
        min%=60;
    }
}
int main()
{
    Time t1,t2,result;
    cout<<"enter the first time\n";
    t1.input();
    cout<<"enter the second time\n";
    t2.input();
    result.addTime(t1,t2);
    cout<<"both times added is :\n";
    result.display();
    return 0;

}