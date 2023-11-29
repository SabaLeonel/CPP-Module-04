#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    this->_brain = new Brain();
    this->_type = "Dog";
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog and it's brain has been destroyed" << std::endl;
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

Brain *Dog::getBrain(void) const
{
    return (this->_brain);
}
