#include<iostream>
using namespace std;

int primeComposite(int);
int main()
{
    int num;
    cout<<"enter any number";
    cin>>num;
    primeComposite(num);
    return 0;
}
int primeComposite(int n)
{
    int i,check=0;
    for(i=2;i<=(n/2);i++)
    {
        if(n%i==0)
            check++;
    }
    if(check==0)
        cout<<"prime number";
    else
        cout<<"not prime number";
    return 0;    
}        
