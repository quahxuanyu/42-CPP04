#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
/**
 * Previosly in the CPP module, compile time polymorphism was used (function overloading, operator overloading)
 * Here, we are using runtime polymorphism (virtual functions, overriding)
 */
int main()
{
	{
		const Animal *meta = new Animal(); // NO polymorphism 
		const Animal *i = new Cat(); // YES polymorphism
		const Animal *j = new Dog(); // YES polymorphism
		const Cat *cat = new Cat(); // NO polymorphism
		const Dog *dog = new Dog(); // NO polymorphism
		std::cout << "--------------------------------------" << std::endl;
		std::cout << meta->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << "--------------------------------------" << std::endl;
		meta->makeSound();
		i->makeSound();
		j->makeSound();
		std::cout << "--------------------------------------" << std::endl;
		delete meta;
		delete i;
		delete j;
	}
	{
		std::cout << std::endl;
		const WrongAnimal *base = new WrongAnimal(); // NO polymorphism
		const WrongAnimal *cat_using_base = new WrongCat(); // NO polymorphism (because WrongAnimal has no virtual functions)
		const WrongCat *cat_using_cat = new WrongCat(); // NO polymorphism
		std::cout << "--------------------------------------" << std::endl;
		std::cout << base->getType() << " " << std::endl;
		std::cout << cat_using_base->getType() << " " << std::endl;
		std::cout << cat_using_cat->getType() << " " << std::endl;
		std::cout << "--------------------------------------" << std::endl;
		base->makeSound();
		cat_using_cat->makeSound();
		cat_using_base->makeSound();
		std::cout << "--------------------------------------" << std::endl;
		delete base;
		delete cat_using_base;
		delete cat_using_cat;
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