#include "Cat.hpp"


Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->_brain = new Brain();
    this->_type = "Cat";
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->_type = copy.getType();
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &copy)
        this->_type = copy._type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow meow" << std::endl;
}

Brain *Cat::getBrain(void) const
{
    return (this->_brain);
}
