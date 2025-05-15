#include<iostream>
#include<math.h>
using namespace std;
int narcissistic(int);
int main()
{
    int num;
    cout<<"enter a number of any digit";
    cin>>num;
    narcissistic(num);
    return 0;
}
int  narcissistic(int n)
{
    int t1,rem,sum=0,l=0;
    t1=n;
    while(n!=0)
    {
        n/=10;
        l++;
    }
    n=t1;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+pow(rem,l);
        n/=10;
    }
    if(sum==t1)
    {
        cout<<" narcissistic number";
    }
    else
    {
        cout<<"not  narcissistic number";
    }
    return 0;
}
