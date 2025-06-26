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
        Complex operator-(int);
};
Complex Complex::operator -(int n)
{
    Complex ob;
    ob.real=real-n;
    ob.img=img-n;
    return ob;
}
int main()
{
    Complex cob1(4,5);
    cob1.display();
    Complex cob3;
    cob3=cob1-5;
    cob3.display();
    return 0;
}