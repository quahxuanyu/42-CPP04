#include "AbAnimal.hpp"

AbAnimal::AbAnimal() : _type("default") {
	std::cout << "AbAnimal default constructor called" << std::endl;
}

AbAnimal::AbAnimal(const AbAnimal &other) : _type(other._type) {
	std::cout << "AbAnimal copy constructor called" << std::endl;
}

AbAnimal &AbAnimal::operator=(const AbAnimal &other) {
	std::cout << "AbAnimal assignment operator called" << std::endl;
	this->_type = other._type;
	return *this;
}

AbAnimal::~AbAnimal() {
	std::cout << "AbAnimal destructor called" << std::endl;
}

/**
 * makeSound() functions is a pure virtual fucntion, thus it should have no definition
 */
// void AbAnimal::makeSound(void) const {
// 	std::cout << "Some generic AbAnimal sound" << std::endl;
// }

std::string AbAnimal::getType(void) const {
	return this->_type;
}