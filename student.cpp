
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    float marks;

    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore();
        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student students[50];
    int count = 0;
    int choice;

    do {
        cout << "\n===== STUDENT RECORD SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. View All Students\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            if (count < 50) {
                students[count].input();
                count++;
                cout << "Student added successfully!\n";
            } else {
                cout << "Student limit reached!\n";
            }
        }
        else if (choice == 2) {
            if (count == 0) {
                cout << "No student records found.\n";
            } else {
                for (int i = 0; i < count; i++) {
                    students[i].display();
                }
            }
        }
        else if (choice != 3) {
            cout << "Invalid choice!\n";
        }

    } while (choice != 3);

    cout << "Thank you!\n";
    return 0;
}
