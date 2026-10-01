#include<iostream>
#include<cstdlib>
using namespace std;

class Student {
    int roll;
    string name;
public:
    Student(int r = 0, string n = "Unknown") : roll(r), name(n) {}

    // Copy constructor
    Student(const Student& s) {
        roll = s.roll;
        name = s.name;
        cout << "Copy constructor called\n";
    }

    // Assignment operator overloading
    void operator=(const Student& s) {
        cout << "Assignment operator called\n";
        if (this != &s) { // Avoid self-assignment
            roll = s.roll;
            name = s.name;
        }
        else{
            cout<<"self assigning"<<endl;
            exit(1);
        }
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1(101, "Ram");
    Student s2 = s1; // Copy constructor called
    Student s3;
    s3 = s1;         // Assignment operator called
    Student s4;
    s4 = s4;

    s1.display();
    s2.display();
    s3.display();
    return 0;
}