#pragma once
#include "person.h"
#include <set>
#include <string>
#include <iostream>
using namespace std;

class Student : public Person {
private:
    int id;
    double gpa;
    set<string> courses;

public:

    Student(int i, string n, double g) : Person(n), id(i), gpa(g) {}


    int getId() const { return id; }
    double getGpa() const { return gpa; }

    void enrollCourse(string courseName) {
        courses.insert(courseName);
    }

    void displayInfo() const {
        cout << "ID: " << id << " | Name: " << name << " | GPA: " << gpa << endl;
        cout << "   Courses: ";
        if (courses.empty()) cout << "None";
        for (const string& c : courses) cout << "[" << c << "] ";
        cout << endl;
    }
};