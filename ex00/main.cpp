#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal *meta = new Animal();
		const Animal *i = new Cat();
		const Animal *j = new Dog();

		std::cout << meta->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		meta->makeSound();
		i->makeSound();
		j->makeSound();
		delete meta;
		delete i;
		delete j;
	}
	{
		std::cout << std::endl;
		const WrongAnimal *meta = new WrongAnimal();
		const WrongAnimal *i = new WrongCat();
		const WrongCat *j = new WrongCat();
		std::cout << meta->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		meta->makeSound();
		i->makeSound();
		j->makeSound();
		delete meta;
		delete i;
		delete j;
	}
	return (0);
}

// int main()
// {
// 	const Animal *meta = new Animal();
// 	const Animal *dog = new Dog();
// 	const Animal *cat = new Cat();
// 	std::cout << cat->getType() << " " << std::endl;
// 	std::cout << dog->getType() << " " << std::endl;
// 	cat->makeSound(); // will output the cat sound!
// 	dog->makeSound();
// 	meta->makeSound();
// 	return 0;
// }