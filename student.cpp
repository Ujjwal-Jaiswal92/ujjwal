#include<iostream>
using namespace std;
struct Student{
    string name;
    int age;
    string gender;
};
int main()
{
    Student student;
    cout<<"enter ur details"<<endl;
    cout<<"name:";
    getline(cin,student.name);
    cout<<"age:";
    cin>>student.age;
    cin.ignore();
    cout<<"gender:";
    getline(cin,student.gender);
    cout<<"ur entered details is:"<<endl;
    cout<<"Name:"<<student.name<<endl<<"age:"<<student.age<<endl<<"gender:"<<student.gender<<endl;
    return 0;
}