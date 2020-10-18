//
// Created by AnSt on 18.10.2020.
//

#pragma once

#include <string>
#include "MedicalStaff.h"
#include "Department.h"

using namespace std;

class Doctor : public MedicalStaff {
public:
    Department department;

    Doctor(string firstName, string lastName, short age, string speciality, Department department, Hospital hospital) : MedicalStaff(firstName, lastName, age, speciality, hospital)
    {
        this->department = department;
    }
};
