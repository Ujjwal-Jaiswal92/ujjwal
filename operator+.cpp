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
        Complex operator+(Complex);
};
Complex Complex::operator +(Complex c)
{
    Complex ob;
    ob.real=real+c.real;
    ob.img=img+c.img;
    return ob;
}
int main()
{
    Complex cob1(4,5),cob2(7,4);
    cob1.display();
    cob2.display();
    Complex cob3;
    cob3=cob1+cob2;
    cob3.display();
    return 0;
}