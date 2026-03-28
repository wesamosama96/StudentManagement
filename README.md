# Student Management System (C++)

A robust and efficient Student Management System built with **C++** using Object-Oriented Programming (OOP) principles. This system allows users to manage student records, track GPAs, and handle course enrollments seamlessly.

## 🚀 Features

- **Add Student:** Register new students with a unique ID, Name, and GPA.
- **Remove Student:** Delete student records using their unique ID.
- **Search:** Quickly find student details and their enrolled courses.
- **Course Enrollment:** Assign multiple courses to a student (stored in a `std::set` to prevent duplicates).
- **Sorting:** Sort the entire student list by GPA in descending order.
- **Data Display:** Clean UI to display all student information, including enrolled courses.

## 🛠 Technical Highlights

- **OOP Concepts:** Implements Inheritance (`Student` inherits from `Person`) and Encapsulation.
- **STL Containers:** Utilizes `std::vector` for dynamic storage and `std::set` for unique course management.
- **Algorithms:** Uses `std::sort` with custom Lambda functions for efficient data ordering and `std::remove_if` for record deletion.

## 📂 Project Structure

- `main.cpp`: The entry point containing the menu-driven logic.
- `Student.h`: Defines the `Student` class and its specific functionalities.
- `person.h`: The base class containing common attributes like `name`.

## 💻 How to Run

1. **Clone the repository:**
   ```bash
   git clone [https://github.com/wesamosama96/StudentManagement.git](https://github.com/wesamosama96/StudentManagement.git)
