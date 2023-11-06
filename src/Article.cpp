#include <Article.hpp>

Article::Article(string code, string name, double price)
    : _code(code),
      _name(name),
      _price(price){}

string Article::getCode() const
{
    return _code;   
}

string Article::getName() const
{
    return _name;    
}

double Article::getPrice() const
{
    return _price;    
}
