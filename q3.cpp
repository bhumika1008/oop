#include <iostream>
using namespace std;

// Class Student
class Student {
protected:
    string name;
    int roll_no;
public:
    void read() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> roll_no;
        cin.ignore(); // To handle newline after roll_no input
    }

    void display() {
        cout << "\nName: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
    }
};

// Class Exam inheriting Student
class Exam : public Student {
protected:
    int marks[5];
public:
    void readMarks() {
        cout << "Enter marks for 5 subjects:\n";
        for(int i = 0; i < 5; i++) {
            cout << "Subject " << i+1 << ": ";
            cin >> marks[i];
        }
    }

    void displayMarks() {
        cout << "\nMarks in 5 subjects:\n";
        for(int i = 0; i < 5; i++) {
            cout << "Subject " << i+1 << ": " << marks[i] << endl;
        }
    }

    int totalMarks() {
        int total = 0;
        for(int i = 0; i < 5; i++) {
            total += marks[i];
        }
        return total;
    }
};

// Class Result inheriting Exam
class Result : public Exam {
public:
    void displayResult() {
        int total = totalMarks();
        float percentage = (float)total / 5;

        display();           // From Student class
        displayMarks();      // From Exam class
        cout << "\nTotal Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

// Main function
int main() {
    Result r;
    r.read();         // Read name and roll no
    r.readMarks();    // Read marks
    r.displayResult();// Display everything
    return 0;
}

