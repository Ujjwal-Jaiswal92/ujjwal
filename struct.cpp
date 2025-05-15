#include <iostream>
using namespace std;

// Define structure for Student
struct Student {
    string name;
    int roll;
    float marks;
    string remarks;
};

int main() {
    Student students[3];

    cout << "Enter information for 50 students:\n\n";

    // Input for 50 students
    for(int i = 0; i < 3; ++i) {
        cout << "Student " << i + 1 << ":\n";

        cout << "Enter name: ";
        cin.ignore(); // clear input buffer
        getline(cin, students[i].name);

        cout << "Enter roll number: ";
        cin >> students[i].roll;

        cout << "Enter marks: ";
        cin >> students[i].marks;

        cout << "Enter remarks: ";
        cin.ignore(); // clear buffer again before getline
        getline(cin, students[i].remarks);

        cout << "\n";
    }

    // Display student records
    cout << "\nDisplaying student information:\n";
    cout << "-------------------------------------------------------------\n";
    cout << "No\tName\tRoll\tMarks\tRemarks\n";
    cout << "-------------------------------------------------------------\n";

    for(int i = 0; i < 3; ++i) {
        cout << i + 1 << "\t"
             << students[i].name << "\t"
             << students[i].roll << "\t"
             << students[i].marks << "\t"
             << students[i].remarks << "\n";
    }

    return 0;
}
