#ifndef ORDER_HPP
#define ORDER_HPP
#pragma once

#include <iostream>
#include <memory>
#include <vector>
#include <IArticle.hpp>
#include <ICustomer.hpp>
#include <IOrder.hpp>

using namespace std;

class Order : public IOrder
{
    public:
        Order(string code, shared_ptr<ICustomer> customer, vector<shared_ptr<IArticle>> articles);
        void setCustomer(shared_ptr<ICustomer> customer);
        void addArticle(shared_ptr<IArticle> article);
        string getCode() const;
        void showOrder();
        
    private:
        string _code;
        shared_ptr<ICustomer> _customer;
        vector<shared_ptr<IArticle>> _articles;
};

#endif