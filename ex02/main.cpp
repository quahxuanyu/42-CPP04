#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "AbAnimal.hpp"

int main()
{
		std::cout << "-----------ABSTRACT ANIMAL TEST------------" << std::endl;
		const AbAnimal *i = new Cat();
		const AbAnimal *j = new Dog();
		//const AbAnimal *test = new AbAnimal();
		// object of abstract class type "AbAnimal" is not allowed object of abstract class type "AbAnimal" is not allowed
		std::cout << "--------------------------------------" << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << "--------------------------------------" << std::endl;
		i->makeSound();
		j->makeSound();
		std::cout << "--------------------------------------" << std::endl;
		delete i;
		delete j;
	return 0;
}