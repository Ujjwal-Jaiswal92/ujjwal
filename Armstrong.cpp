#include<iostream>
using namespace std;
int arm(int);

int main()
{
    int num;
    cout<<"enter a number";
    cin>>num;
    arm(num);
    return 0;
}
int arm(int n)
{
    int rem,sum=0,temp;
    temp=n;
    while(n!=0)
    {
        rem=n/10;
        sum=sum+rem*rem*rem;
        n/=10;
    }
    if(temp==sum)
    {
        cout<<"armstrong number";
    }
    else
    {
        cout<<"not an armstrong number";
    }
    return 0;
}
