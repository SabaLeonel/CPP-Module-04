#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
    public:
        Animal();
        virtual ~Animal();
        Animal(std::string type);
        Animal(const Animal &copy);
        virtual Animal &operator=(const Animal &copy);
        std::string getType() const;
        virtual void makeSound() const = 0;
        virtual Brain *getBrain() const = 0;
    protected:
        std::string _type;
};

#endif
