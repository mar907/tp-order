#include <Customer.hpp>

Customer::Customer(string code, string name, string address)
    : _code(code),
      _name(name),
      _address(address){}

string Customer::getCode() const
{
    return _code;
}

string Customer::getName() const
{
    return _name;
}

string Customer::getAddress() const
{
    return _address;
}
