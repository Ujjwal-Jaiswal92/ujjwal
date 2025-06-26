#include<iostream>
using namespace std;

class Complex
{
    int real, img;
    public:
        Complex(int r,int i)
        {
            real=r;
            img=i;
        }
        Complex()
        {
            real=0;
            img=0;
        }
        void display()
        {
            cout<<"\nReal="<<real<<"\nImaginary="<<img<<endl;
        }
        friend Complex operator-(Complex);
};
Complex operator -(Complex c)
{
    Complex ob;
    ob.real=-c.real;
    ob.img=-c.img;
    return ob;
}
int main()
{
    Complex cob1(4,5);
    cob1.display();
    Complex cob2;
    cob2=-cob1;
    cob2.display();
    return 0;
}