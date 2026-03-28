#include "Student.h"

Student::Student(int i, string n, double g) : Person(n), id(i), gpa(g) {}


int Student::getId() const { return id; }
double Student::getGpa() const { return gpa; }

void Student::enrollCourse(string courseName) {
    courses.insert(courseName);
}

void Student::displayInfo() const {
    cout << "ID: " << id << " | Name: " << name << " | GPA: " << gpa << endl;
    cout << "   Courses: ";
    if (courses.empty()) cout << "None";
    for (const string& c : courses) cout << "[" << c << "] ";
    cout << endl;
}