#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice materia defualt constructor called." << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other) {
	std::cout << "Ice materia copy constructor called." << std::endl;
}

Ice &Ice::operator=(const Ice &other) {
	std::cout << "Ice materia assignment operator called." << std::endl;
	if (this != &other) {
		AMateria::operator=(other);
	}
	return *this;
}

Ice::~Ice() {
	std::cout << "Ice materia destructor called." << std::endl;
}

AMateria *Ice::clone() const {
	std::cout << "Ice materia clone called." << std::endl;
	return new Ice();
}

void Ice::use(ICharacter &target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}