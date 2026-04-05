#include <iostream>
#include <string>

using namespace std;


string calculateGrade(int marks) {
    if (marks >= 90) 
        return "Grade A";
    if (marks >= 80) 
        return "Grade B";
    if (marks >= 70) 
        return "Grade C";
    if (marks >= 60) 
        return "Grade D";
    return "Fail";
}

string checkEligibility(int attendance) {
    
    return (attendance < 75) ? "Not eligible" : "Eligible";
}


void handleStudent() {
    int marks, attendance;

    cout << "Enter marks: ";
    cin >> marks;
    cout << calculateGrade(marks) << endl;

    cout << "Enter attendance: ";
    cin >> attendance;
    cout << checkEligibility(attendance) << endl;
}

void handleTeacher() {
    int salary, yearsOfExperience;

    cout << "Enter salary: ";
    cin >> salary;
    cout << (salary > 50000 ? "High salary" : "Low salary") << endl;

    cout << "Enter years of experience: ";
    cin >> yearsOfExperience;
    cout << (yearsOfExperience > 10 ? "Senior Teacher" : "Junior Teacher") << endl;
}


int main() {
    int choice;
    cout << "Enter choice (1 for Student, 2 for Teacher): ";
    cin >> choice;

    switch (choice) {
        case 1:
            handleStudent();
            break;
        case 2:
            handleTeacher();
            break;
        default:
            cout << "Invalid choice." << endl;
            return 0;
    }

    cout << "Done" << endl;
    return 0;
}