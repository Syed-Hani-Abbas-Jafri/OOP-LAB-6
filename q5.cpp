#include <iostream>
#include <string>
using namespace std;

class Person {
    protected:
        string name;
        int age;
    public:
        Person(string n, int a) : name(n), age(a) {}
        void Display() {
            cout << "Name     : " << name << endl;
            cout << "Age      : " << age  << endl;
        }
};

class Student : public Person {
    protected:
        int studentID;
        int gradeLevel;
    public:
        Student(string n, int a, int id, int g)
            : Person(n, a), studentID(id), gradeLevel(g) {}
        void Display() {
            Person::Display();
            cout << "Student ID   : " << studentID  << endl;
            cout << "Grade Level  : " << gradeLevel << endl;
        }
};

class Teacher : public Person {
    protected:
        string subject;
        int roomNumber;
    public:
        Teacher(string n, int a, string s, int r)
            : Person(n, a), subject(s), roomNumber(r) {}
        void Display() {
            Person::Display();
            cout << "Subject      : " << subject    << endl;
            cout << "Room Number  : " << roomNumber << endl;
        }
};

class GraduateStudent : public Student, public Teacher {
    public:
        GraduateStudent(string n, int a, int id, int g, string s, int r)
            : Student(n, a, id, g), Teacher(n, a, s, r) {}
        void Display() {
            cout << "/-/-/-/- Graduate Student Stats /-/-/-/-" << endl;
            cout << "Name         : " << Student::name  << endl;
            cout << "Age          : " << Student::age   << endl;
            cout << "Student ID   : " << studentID      << endl;
            cout << "Grade Level  : " << gradeLevel     << endl;
            cout << "Subject      : " << subject        << endl;
            cout << "Room Number  : " << roomNumber     << endl;
            cout << "/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-" << endl;
        }
};

int main() {
    GraduateStudent GS("Aliyan", 25, 1011, 4, "Mathematics", 302);
    GS.Display();
    return 0;
}
