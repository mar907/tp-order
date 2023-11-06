#ifndef ICUSTOMER_H
#define ICUSTOMER_H
#pragma once

#include <iostream>
#include <string>

using namespace std;

class ICustomer
{
    public:
        virtual string getCode() const = 0;
        virtual string getName() const = 0;
        virtual string getAddress() const = 0;
};

#endif