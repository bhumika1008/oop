#include <iostream>
using namespace std;

// Base class
class Lecturer {
protected:
    string name;
    int id;
public:
    string courseId;
    string course_Name;

    // Virtual function defined before constructor
    virtual void showDetails() {
        cout << "Lecturer Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Course ID: " << courseId << endl;
        cout << "Course Name: " << course_Name << endl;
    }

    // Constructor
    Lecturer(string n, int i, string cId, string cName) {
        name = n;
        id = i;
        courseId = cId;
        course_Name = cName;
    }

    // Virtual destructor (recommended)
    virtual ~Lecturer() {}
};

// Derived class: PartTimeFaculty
class PartTimeFaculty : public Lecturer {
private:
    int payPerHour;
public:
    PartTimeFaculty(string n, int i, string cId, string cName, int pay)
    : Lecturer(n, i, cId, cName) {
        payPerHour = pay;
    }

    void showDetails() override {
        Lecturer::showDetails();  // Optional: show base class info
        cout << "Pay per Hour: " << payPerHour << endl;
    }
};

// Derived class: FullTimeFaculty
class FullTimeFaculty : public Lecturer {
private:
    int salary;
public:
    FullTimeFaculty(string n, int i, string cId, string cName, int sal)
    : Lecturer(n, i, cId, cName) {
        salary = sal;
    }

    void showDetails() override {
        Lecturer::showDetails();  // Optional: show base class info
        cout << "Salary: " << salary << endl;
    }
};

// Main function
int main() {
    Lecturer* lec;

    PartTimeFaculty pt("Khushi", 101, "CSC101", "C++", 500);
    FullTimeFaculty ft("Sajak", 501, "CSC501", "Ds", 40000);

    cout << "--- Part-Time Faculty ---" << endl;
    lec = &pt;
    lec->showDetails();

    cout << "\n--- Full-Time Faculty ---" << endl;
    lec = &ft;
    lec->showDetails();

    return 0;
}

