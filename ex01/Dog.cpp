#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    this->_type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->_type = copy._type;
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Dog assignation operator called" << std::endl;
    this->_type = copy._type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Woof woof" << std::endl;
}

