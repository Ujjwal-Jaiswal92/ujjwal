#include<iostream>
using namespace std;

class Student
{
    char name[10];
    int roll;
    static int count;
    public:
        void input();
        void display();
        static void disCount();
};
int Student::count;
void Student::input()
{
    cout<<"name:";
    cin>>name;
    cout<<"roll:";
    cin>>roll;
    count++;
}
void Student::display()
{
    cout<<"name:"<<name<<endl<<"roll:"<<roll<<endl;
    cout<<"The number of students is"<<count<<endl;
}
void Student::disCount()
{
    cout<<"the counter is "<<count<<endl;
}
int main()
{
    Student s;
    int i;
    for(i=0;i<3;i++)
    {
        s.input();
        s.display();
        Student::disCount();
    }
    return 0;

}