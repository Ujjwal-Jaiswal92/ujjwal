#include<iostream>
using namespace std;

int sum(int, int);
int main()
{
    int a, b,result;
    cout<<"enter any two numbers";
    cin>>a>>b;
    result=sum(a,b);
    cout<<"the sum of the two numbers are:"<<result;
    return 0;
}
int sum(int a,int b)
{
    return (a+b);
} 
