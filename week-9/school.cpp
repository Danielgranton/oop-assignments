// BCS-05-0068/2025
// Sifuna Daniel Granton
// school management system

#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

    void displayPerson() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Student : public Person {
public:
    int admissionNumber;
    std::string Class;

    void displayStudent() {
        std::cout << "Admission Number: " << admissionNumber << std::endl;
        std::cout << "Class: " << Class << std::endl;
        displayPerson();
    }
};

int main() {
    Student student;

    std::cout << "Enter name: ";
    std::getline(std::cin, student.name);

    std::cout << "Enter age: ";
    std::cin >> student.age;

    std::cout << "Enter admission number: ";
    std::cin >> student.admissionNumber;

    // Clear the newline left by cin >>
    std::cin.ignore();

    std::cout << "Enter class: ";
    std::getline(std::cin, student.Class);

    std::cout << "\nStudent Details\n";
    student.displayStudent();

    return 0;
}