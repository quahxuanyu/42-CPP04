#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "-----------ANIMAL TEST------------" << std::endl;
	int size = 10;
	const Animal *animal_arr[size];

	for (int i = 0; i < size / 2; i++)
		animal_arr[i] = new Cat();
	for (int i = size / 2; i < size; i++)
		animal_arr[i] = new Dog();
	for (int i = 0; i < size; i++)
		animal_arr[i]->makeSound();
	for (int i = 0; i < size; i++)
		delete animal_arr[i];


	std::cout << "\n-----------DEEP COPT TEST------------" << std::endl;
	{
		Cat a;
		Cat b = a;  // Copy constructor
		Cat c;
		c = a;      // Assignment operator
	}
	{
		Dog a;
		Dog b = a;  // Copy constructor
		Dog c;
		c = a;      // Assignment operator
	}

}