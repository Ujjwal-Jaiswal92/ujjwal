#include<iostream>
using namespace std;

class Car
{
    static int count;
    public:
    Car()
    {
        count++;
        cout<<"\nthere are"<<count<<"number of cars"<<endl;
    }
    ~Car()
    {
        count--;
        cout<<"\nthere are"<<count<<"number of cars"<<endl;
    }
};
int Car::count;
int main()
{
    cout<<"We are in the main block";
    Car c1, c2, c3, c4;
    {
        cout<<"We are in block 1";
        Car c5;
    }
    {
        cout<<"We are in block 2";
        Car c6;
    }
    return 0;
}