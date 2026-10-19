#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student {
    int id;
    string name;
    float grade;
};

vector<Student> students;

void addStudent() {
    Student s;
    cout << "Enter Student ID: ";
    cin >> s.id;
    cin.ignore(); 
    cout << "Enter Student Name: ";
    getline(cin, s.name);
    cout << "Enter Student GRADE: ";
    cin >> s.grade;
    
    students.push_back(s);
    cout << "Student added successfully!\n\n";
}

void displayStudents() {
    if (students.empty()) {
        cout << "No student records found.\n\n";
        return;
    }
    
    cout << "\n--- Student List ---\n";
    for (const auto& s : students) {
        cout << "ID: " << s.id << " | Name: " << s.name << " | GRADE: " << s.grade << "\n";
    }
    cout << "\n";
}

int main() {
    int choice;
    do {
        cout << "=== Student Management System ===\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n\n";
        }
    } while (choice != 3);

    return 0;
}