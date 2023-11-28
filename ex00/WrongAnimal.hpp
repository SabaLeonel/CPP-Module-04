#ifndef WRONGANIMAl_HPP
 #define WRONGANIMAl_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal &operator=(const WrongAnimal &copy);
        virtual ~WrongAnimal();
        std::string getType() const;
        void makeSound() const;
};

#endif
