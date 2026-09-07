#include <iostream>
#include <string>
using namespace std;

struct Patient {
    string patientName;
    string patientId;
    int Age;
    string Disease;
};

class Hospital {
private:
    Patient patients[5] = {
        {"Areeba", "AC342", 21, "fever"},
        {"Ali", "AC452", 34, "cough"}
    };

    int count = 2;

public:

    void addPatient() {
        if (count >= 5) {
            cout << "No space available" << endl;
            return;
        }

        cout << "Enter patient name: ";
        cin >> patients[count].patientName;

        cout << "Enter patient ID: ";
        cin >> patients[count].patientId;

        cout << "Enter patient age: ";
        cin >> patients[count].Age;

        cout << "Enter patient disease: ";
        cin >> patients[count].Disease;

        count++;

        cout << "Patient added successfully!" << endl;
    }

    void searchPatient(string patientId) {
        for (int i = 0; i < count; i++) {
            if (patients[i].patientId == patientId) {
                cout << "Patient admitted here:" << endl;
                cout << "Patient Name = " << patients[i].patientName << endl;
                cout << "Patient ID = " << patients[i].patientId << endl;
                cout << "Patient Age = " << patients[i].Age << endl;
                cout << "Patient Disease = " << patients[i].Disease << endl;
                return;
            }
        }

        cout << "Patient not available" << endl;
    }

    void deletePatient(string patientId) {
        for (int i = 0; i < count; i++) {
            if (patients[i].patientId == patientId) {

                for (int j = i; j < count - 1; j++) {
                    patients[j] = patients[j + 1];
                }

                count--;

                cout << "Patient deleted successfully!" << endl;
                return;
            }
        }

        cout << "Patient not found" << endl;
    }

    void updatePatient(string patientId) {
        for (int i = 0; i < count; i++) {
            if (patients[i].patientId == patientId) {

                cout << "Enter new patient name: ";
                cin >> patients[i].patientName;

                cout << "Enter new patient ID: ";
                cin >> patients[i].patientId;

                cout << "Enter new patient age: ";
                cin >> patients[i].Age;

                cout << "Enter new patient disease: ";
                cin >> patients[i].Disease;

                cout << "Patient updated successfully!" << endl;
                return;
            }
        }

        cout << "Patient not found!" << endl;
    }
};

int main() {
    Hospital p1;

    p1.addPatient();

    p1.searchPatient("AC452");

    p1.deletePatient("AC452");

    p1.updatePatient("AC452");

    return 0;
}

