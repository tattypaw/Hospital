//
// Created by AnSt on 18.10.2020.
//

#pragma once

#include <string>
#include "Hospital.h"

using namespace std;

class MedicalStaff {
protected:
    short age;
    string firstName;
    string lastName;
    string speciality;
    Hospital hospital;
public:
    MedicalStaff(string firstName, string lastName, short age, string speciality, Hospital hospital)
    {
        this->firstName = firstName;
        this->lastName = lastName;

        this->speciality = speciality;

        if (age < 18) {
            throw 18;
        } else {
            this->age = age;
        }
        this->hospital = hospital;
    }
};