#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat(std::string type)
{
    std::cout << "WrongCat parameter constructor called" << std::endl;
    this->_type = type;
}

WrongCat::WrongCat(const WrongCat &copy)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    this->_type = copy._type;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    if (this != &copy)
        this->_type = copy._type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound" << std::endl;
}

