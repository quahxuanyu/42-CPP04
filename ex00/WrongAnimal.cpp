#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("default")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other._type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	this->_type = other._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Some generic WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return this->_type;
}