#include<iostream>
using namespace std;

class Example 
{
    int num;
    static int count;
    public:
    void input();
    void display();
    static void countDisplay();

};
int Example::count;//defining static variable
void Example::input()
{
    cout<<"enter any number";
    cin>>num;
    count=count+1;
}
void Example::display()
{
    cout<<"\nNumber="<<num<<"\ncounter="<<count<<endl;
}
void Example::countDisplay()
{
    cout<<"the counter="<<count<<endl;
}
int main()
{
    Example::countDisplay();
    Example e1,e2;
    e1.input();
    e2.input();
    Example::countDisplay();
    Example e3;
    e3.input();
    Example::countDisplay();
    e1.display();
    e2.display();
    e3.display();
    return 0;
}