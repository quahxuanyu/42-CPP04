#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
protected:
	std::string _type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	WrongAnimal &operator=(const WrongAnimal &other);
	virtual ~WrongAnimal();
	std::string getType(void) const;
	void makeSound(void) const; // no "virtual"
	/**
	 * no virtual function is used as this is for the wrong class
	 * when the WrongCat inherits from it and redefines, 
	 * it will still display WrongAnimal sound when created using a WrongAnimal pointer
	 */
};

#endif