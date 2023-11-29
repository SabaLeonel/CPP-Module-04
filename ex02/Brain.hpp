#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Brain
{

    public:
        std::string ideas[100];
        Brain();
        ~Brain();
        Brain(Brain const &copy);
        Brain &operator=(const Brain &copy);
};

#endif
