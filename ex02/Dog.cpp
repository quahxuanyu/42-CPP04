#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : AbAnimal() {
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : AbAnimal(other) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain(*other._brain);
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &other) {
		AbAnimal::operator=(other);
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

void Dog::makeSound(void) const {
	std::cout << "Woof!" << std::endl;
}