//
// Created by AnSt on 18.10.2020.
//
#pragma once

#include <string>

using namespace std;

class Department {
public:
    string name;
    string speciality;
    Department() {}
    Department(string name, string specialty)
    {
        this->name = name;
        this->speciality = specialty;
    }
};
