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
        Complex operator-();
};
Complex Complex::operator -()
{
    Complex ob;
    ob.real=-real;
    ob.img=-img;
    return ob;
}
int main()
{
    Complex cob1(4,5);
    cob1.display();
    Complex cob2;
    cob2=cob1;
    cob2.display();
    return 0;
}