#include<iostream>
using namespace std;
class External;
class Administration;
class Internal
{
    int m1[6];
    public:
        void input()
        {
            cout<<"enter internal marks of 6 subjects";
            for(int i=0;i<6;i++)
            {
                cin>>m1[i];
            }
        }
        friend void admin(Internal,External);
};
class External
{
    int m2[6];
    public:
        void input()
        {
            cout<<"enter External marks of 6 subjects";
            for(int i=0;i<6;i++)
            {
                cin>>m2[i];
            }
            
        }
        friend void admin(Internal,External);
};
class Administration
{
    
    public:
        friend void admin(Internal im, External em)
        {
            int i,total[6];
            for(i=0;i<6;i++)
            {
                total[i]=im.m1[i]+em.m2[i];
            }
            cout<<"the total marks are:\n";
            for(i=0;i<6;i++)
            {
                cout<<total[i]<<" ";
            }
        }
};
int main()
{
    Internal im;
    External em;
    Administration am;
    im.input();
    em.input();
    admin(im,em);
    return 0;
}