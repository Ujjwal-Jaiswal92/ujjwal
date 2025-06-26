#include <iostream>
using namespace std;

class Person {
protected:
    char name[20];
    int age;
public:
    void setPerson() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    int roll;
public:
    void setStudent() {
        setPerson();
        cout << "Enter Roll No.: ";
        cin >> roll;
    }

    void displayStudent() {
        displayPerson();
        cout << "Roll: " << roll << endl;
    }
};

class Employee : public Person {
protected:
    char address[20];
public:
    void setEmployee() {
        setPerson();
        cout << "Enter Address: ";
        cin >> address;
    }

    void displayEmployee() {
        displayPerson();
        cout << "Address: " << address << endl;
    }
};

class Permanent : public Employee {
protected:
    int id;
    float insurance_amt;
public:
    void setAmount() {
        setEmployee();
        cout << "Enter Permanent ID: ";
        cin >> id;
        cout << "Enter Insurance Amount: ";
        cin >> insurance_amt;
    }

    void displayAmount() {
        displayEmployee();
        cout << "ID: " << id << endl;
        cout << "Insurance Amount: " << insurance_amt << endl;
    }
};

class Temporary : public Employee {
protected:
    int tempID;
public:
    void setTempEmployee() {
        setEmployee();
        cout << "Enter Temporary Employee ID: ";
        cin >> tempID;
    }

    void displayTempEmployee() {
        displayEmployee();
        cout << "Temp Employee ID: " << tempID << endl;
    }
};

class Contract : public Temporary {
protected:
    float salary;
    char cont_Date[20];
public:
    void setContract() {
        setTempEmployee();
        cout << "Enter Salary: ";
        cin >> salary;
        cout << "Enter Contract Date: ";
        cin >> cont_Date;
    }

    void displayContract() {
        displayTempEmployee();
        cout << "Salary: " << salary << endl;
        cout << "Contract Date: " << cont_Date << endl;
    }
};

class DailyWage : public Temporary {
protected:
    float daily_wage;
public:
    void setDailyWage() {
        setTempEmployee();
        cout << "Enter Daily Wages: ";
        cin >> daily_wage;
    }

    void displayDailyWage() {
        displayTempEmployee();
        cout << "Rate Per Day: " << daily_wage << endl;
    }
};

int main() {
    cout << "\nStudent Details:\n";
    Student s;
    s.setStudent();
    s.displayStudent();

    cout << "\nPermanent Employee Details\n";
    Permanent p;
    p.setAmount();
    p.displayAmount();

    cout << "\nContract Employee Details\n";
    Contract c;
    c.setContract();
    c.displayContract();

    cout << "\nDaily Wage Employee Details\n";
    DailyWage d;
    d.setDailyWage();
    d.displayDailyWage();

    return 0;
}
