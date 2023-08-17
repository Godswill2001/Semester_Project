#include <iostream>
#include <string>
#include <vector> 

using namespace std;

class Patient {
public:
    Patient(const string& name, int age, const string& diagnosis)
        : name(name), age(age), diagnosis(diagnosis) {} 

    string getName() const { return name; }
    int getAge() const { return age; }
    string getDiagnosis() const { return diagnosis; } 

private:
    string name;
    int age;
    string diagnosis;
}; 

class MedicalInfoSystem {
public:
    void addPatient(const Patient& patient) {
        patients.push_back(patient);
    } 

    void displayPatients() const {
        for (const Patient& patient : patients) {
            cout << "Name: " << patient.getName() << endl;
            cout << "Age: " << patient.getAge() << endl;
            cout << "Diagnosis: " << patient.getDiagnosis() << endl;
            cout << "------------------------" << endl;
        }
    } 

private:
    vector<Patient> patients;
}; 

int main() {
    MedicalInfoSystem infoSystem; 

    // Adding patients
    infoSystem.addPatient(Patient("John Doe", 30, "Fever"));
    infoSystem.addPatient(Patient("Jane Smith", 45, "Hypertension")); 

    // Displaying patients
    infoSystem.displayPatients(); 

    return 0;
}