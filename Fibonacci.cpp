#include<iostream>
using namespace std;
int fibo(int);
int main()
{
    int terms;
    cout<<"enter the number of terms";
    cin>>terms;
    fibo(terms);
    return 0;
}
int fibo(int n)
{
    int first=0,second=1,next,i;
    for(i=1;i<=n;i++)
    {
        cout<<"\t"<<first;
        next=first+second;
        first=second;
        second=next;
    }
    return 0;
}
