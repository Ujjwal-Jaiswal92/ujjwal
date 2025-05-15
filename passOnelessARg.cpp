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
        Complex addComplex(Complex c2);
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
Complex Complex::addComplex(Complex c2)
{
    Complex result;
    result.real = real + c2.real;
    result.img = img + c2.img;
    return result;
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
    result=c1.addComplex(c2);
    result.display();
    return 0;
}