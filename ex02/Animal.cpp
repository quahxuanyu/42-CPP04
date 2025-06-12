#include "Animal.hpp"

Animal::Animal() : _type("default") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &other) : _type(other._type) {
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
	std::cout << "Animal assignment operator called" << std::endl;
	this->_type = other._type;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound(void) const {
	std::cout << "Some generic animal sound" << std::endl;
}

std::string Animal::getType(void) const {
	return this->_type;
}