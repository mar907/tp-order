#ifndef IORDER_HPP
#define IORDER_HPP
#pragma once

#include <iostream>
#include <memory>
#include <vector>
#include <IArticle.hpp>
#include <ICustomer.hpp>

using namespace std;

class IOrder 
{
    public:
        virtual string getCode() const = 0;
        virtual void setCustomer(shared_ptr<ICustomer> customer) = 0;
        virtual void addArticle(shared_ptr<IArticle> article) = 0;
        virtual void showOrder() = 0;
};

#endif