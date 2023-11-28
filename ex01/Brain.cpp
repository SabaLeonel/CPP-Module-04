#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        ideas[i] = "default";
    std::cout << "The brain has been created and filled with ideas" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain has been destroyed" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = copy.ideas[i];
}

Brain &Brain::operator=(const Brain &copy)
{
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &copy)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = copy.ideas[i];
    }
    return *this;
}

