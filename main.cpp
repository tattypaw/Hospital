#include <iostream>
#include <string>
#include "Doctor.h"

using namespace std;

Doctor ConsoleInputDoctor();

int main()
{
    Doctor doctor = ConsoleInputDoctor();
}

Doctor ConsoleInputDoctor()
{
    string firstName, lastName, specialty;
    string nameOfDepartment, specialtyOfDepartment;
    string nameOfHospital, address;
    int age;

    cout << "Enter first name - "; cin >> firstName;
    cout << "Enter last name - "; cin >> lastName;
    cout << "Enter age - "; cin >> age;
    cout << "Enter specialty - "; cin >> specialty;

    cout << "Enter name of department - "; cin >> nameOfDepartment;
    cout << "Enter specialty of department - "; cin >> specialtyOfDepartment;

    cout << "Enter name of hospital - "; cin >> nameOfHospital;
    cout << "Enter address of hospital - "; cin >> address;

    Hospital hospital(nameOfHospital, address);
    Department department(nameOfDepartment, specialtyOfDepartment);

    Doctor doctor(firstName, lastName, age, specialty, department, hospital);

    return doctor;
}
