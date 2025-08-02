#include <iostream>
#include <string>
using namespace std;

// Base Class
class Payment {
private:
    int billNo;
    float totalAmount;

public:
    void getPayment() {
        cout << "Enter Bill Number: ";
        cin >> billNo;
        cout << "Enter Total Amount: ";
        cin >> totalAmount;
    }

    void showPayment() {
        cout << "Bill Number: " << billNo << endl;
        cout << "Total Amount: Rs. " << totalAmount << endl;
    }
};

// Derived from Payment
class Ward : public Payment {
protected:
    string wardType;
    int bedNo;

public:
    void getWardDetails() {
        cout << "Enter Ward Type (General/Private): ";
        cin>>wardType;
        cout << "Enter Bed Number: ";
        cin >> bedNo;
    }

    void showWardDetails() {
        cout << "Ward Type: " << wardType << endl;
        cout << "Bed Number: " << bedNo << endl;
    }
};

// Derived from Ward
class Patient : public Ward {
protected:
    int patientId;
    string name;

public:
    void getPatientDetails() {
        cout << "Enter Patient ID: ";
        cin >> patientId;
        cin.ignore(); // clear newline
        cout << "Enter Patient Name: ";
        getline(cin, name);

        // Call base class functions
        getWardDetails();
        getPayment();
    }

    void showPatientDetails() {
        cout << "\n--- Patient Details ---" << endl;
        cout << "Patient ID: " << patientId << endl;
        cout << "Name: " << name << endl;
        showWardDetails();
        showPayment();
    }
};

// Main Function
int main() {
    Patient p;
    cout << "Enter Patient Information:\n";
    p.getPatientDetails();

    p.showPatientDetails();

    return 0;
}

