#ifndef CUSTOMER_H
#define CUSTOMER_H
#pragma once

#include <ICustomer.hpp>

using namespace std;

class Customer : public ICustomer
{
    public:
        Customer(string code, string name, string address);
        string getCode() const;
        string getName() const;
        string getAddress() const;
        
    private:
        string _code;
        string _name;
        string _address;
};

#endif