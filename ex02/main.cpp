#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "AbAnimal.hpp"

int main()
{
		const AbAnimal *i = new Cat();
		const AbAnimal *j = new Dog();
		//const AbAnimal *test = new AbAnimal();
		// object of abstract class type "AbAnimal" is not allowed object of abstract class type "AbAnimal" is not allowed

		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		delete i;
		delete j;
	return 0;
}