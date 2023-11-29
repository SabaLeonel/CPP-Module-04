#include "Brain.hpp"


Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "default";
    std::cout << "The brain has been created and filled with ideas" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain has been destroyed" << std::endl;
}

Brain &Brain::operator=(const Brain &copy)
{
    (void) copy;
    return *this;
}

Brain::Brain(Brain const &copy)
{
    for (int i = 0; i < (int)ideas->length(); i++)
        this->ideas[i] = copy.ideas[i];
}
