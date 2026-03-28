#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "Student.h"

using namespace std;

void showMenu() {
    cout << "\n--- Student Management System ---\n";
    cout << "1. Add Student\n2. Remove Student\n3. Search Student\n";
    cout << "4. Display All\n5. Enroll in Course\n6. Sort by GPA\n7. Exit\n";
    cout << "Choice: ";
}

int main()
{

    vector<Student> students;
    int choice;

    while (true) {
        showMenu();
        cin >> choice;

        if (choice == 1) {
            int id; string name; double gpa;
            cout << "Enter ID: "; cin >> id;
            cout << "Enter Name: "; cin.ignore(); getline(cin, name);
            cout << "Enter GPA (0.0 - 4.0): "; cin >> gpa;

            if (gpa >= 0.0 && gpa <= 4.0) {
                students.push_back(Student(id, name, gpa));
                cout << "Student added successfully.\n";
            }
            else {
                cout << "Invalid GPA!\n";
            }
            bool exists = false;
            for (const auto& s : students) {
                if (s.getId() == id) { exists = true; break; }
            }
            if (exists) {
                cout << "Error: ID already exists!\n";
                continue;
            }
        }
        else if (choice == 2) {
            int removeId;
            cout << "Enter ID to remove: "; cin >> removeId;
            auto it = remove_if(students.begin(), students.end(), [removeId](const Student& s) {
                return s.getId() == removeId;
                });
            if (it != students.end()) {
                students.erase(it, students.end());
                cout << "Student removed.\n";
            }
            else cout << "Not found.\n";
        }
        else if (choice == 3) {
            int searchId;
            cout << "Enter ID to search: "; cin >> searchId;
            bool found = false;
            for (const auto& s : students) {
                if (s.getId() == searchId) {
                    s.displayInfo();
                    found = true; break;
                }
            }
            if (!found) cout << "Student not found.\n";
        }
        else if (choice == 4) {
            for (const auto& s : students) s.displayInfo();
        }
        else if (choice == 5) {
            int targetId;
            cout << "Enter Student ID: "; cin >> targetId;
            bool found = false;
            for (auto& s : students) {
                if (s.getId() == targetId) {
                    string cName;
                    cout << "Enter Course Name: "; cin.ignore(); getline(cin, cName);
                    s.enrollCourse(cName);
                    found = true; break;
                }
            }
            if (!found) cout << "Student not found.\n";
        }
        else if (choice == 6) {
            sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
                return a.getGpa() > b.getGpa();
                });
            cout << "Students sorted by GPA.\n";
        }
        else if (choice == 7) break;
    }

	return 0;
}

