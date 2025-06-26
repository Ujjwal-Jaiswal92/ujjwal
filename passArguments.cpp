#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int img;
    public:
        void input();
        void display();
        void addComplex(Complex c1, Complex c2);
};
void Complex::input()
{
    cout<<"real part :";
    cin>>real;
    cout<<"imaginary part :";
    cin>>img;
}
void Complex::display()
{
    cout<<"real part is "<<real<<endl;
    cout<<"imaginary part is "<<img<<endl;
}
void Complex::addComplex(Complex c1,Complex c2)
{
    
    real = c1.real + c2.real;
    img = c1.img + c2.img;
    
}
int main()
{
    Complex c1,c2,result;
    cout<<"input for c1\n";
    c1.input();
    cout<<"entered details are:\n";
    c1.display();
    cout<<"input for c2\n";
    c2.input();
    cout<<"entered details are:\n";
    c2.display();
    result.addComplex(c1,c2);
    cout<"the added complex number is:";
    result.display();
    return 0;
}