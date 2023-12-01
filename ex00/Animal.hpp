#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    public:
        Animal();
        virtual ~Animal();
        Animal(std::string type);
        Animal(const Animal &copy);
        Animal &operator=(const Animal &copy);
        std::string getType() const;
        virtual void makeSound() const;
    protected:
        std::string _type;
};

#endif
