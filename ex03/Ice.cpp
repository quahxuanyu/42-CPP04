#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	// Constructor initializes the type to "ice"
}

Ice::Ice(const Ice &other) : AMateria(other) {
	 // Copy constructor
}

Ice &Ice::operator=(const Ice &other) {
	if (this != &other) {
		AMateria::operator=(other);
	}
	return *this;
}

Ice::~Ice() {
	// Destructor
}

AMateria *Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter &target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}