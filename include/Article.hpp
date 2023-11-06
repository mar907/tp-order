#ifndef ARTICLE_H
#define ARTICLE_H
#pragma once

#include <IArticle.hpp>

using namespace std;

class Article : public IArticle
{
    public:
        Article(string code, string name, double price); 
        string getCode() const;
        string getName() const;
        double getPrice() const;
    private:
        string _code;
        string _name;
        double _price;
};

#endif