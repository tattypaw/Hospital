//
// Created by AnSt on 18.10.2020.
//
#pragma once

#include <string>

using namespace std;

class Hospital {
private:
    string name;
    string address;
public:
    Hospital() {}
    Hospital(string name, string address)
    {
        this->name = name;
        this->address = address;
    }
    string GetName()
    {
        return name;
    }
    string GetAddress()
    {
        return address;
    }
};
