#include<iostream>
using namespace std;

class Circle
{
    private:
        float radius;
        float area;
    public:
        void input(int);
        void display(int);
        void calculation(); 
};
void Circle::input(int i)
{
    cout<<"enter radius of the circle"<<i+1<<" :";
    cin>>radius;
}
void Circle::display(int i)
{
    cout<<"the area of the circle"<<i+1<<" is:"<<area;
}
void Circle::calculation()
{
    area = 3.14 * radius * radius;
}
int main()
{
    Circle cir[3];
    int i;
    for(i=0;i<3;i++)
    {
        cir[i].input(i);
    }
    for(i=0;i<3;i++)
    {
        cir[i].calculation();
    }
    for(i=0;i<3;i++)
    {
        cir[i].display(i);
    }
    return 0;
}