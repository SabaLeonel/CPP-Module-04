#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"


int main(void)
{	// Array of animals
	Animal	*tab[4];
	Brain *brain;

	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
		std::cout << tab[i]->getType() << std::endl;
	}

	// Deep copy
	brain = tab[0]->getBrain();
	brain->ideas[0] = "Hello idea";
	brain->ideas[1] = "Aluile hahaha";
	brain->ideas[2] = "Bbaluile hihihi";

	std::cout << tab[0]->getBrain()->ideas[0] << std::endl;

	*(tab[3]) = *(tab[2]);
	std::cout << tab[3]->getBrain()->ideas[2] << std::endl;

	for (int i = 0; i < 4; i++)
		delete tab[i];

    return 0;
}
