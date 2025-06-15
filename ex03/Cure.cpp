#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	// Constructor initializes the type to "cure"
}

Cure::Cure(const Cure &other) : AMateria(other) {
 // Copy constructor
}

Cure &Cure::operator=(const Cure &other) {
	if (this != &other) {
		AMateria::operator=(other);
	}
	return *this;
}

Cure::~Cure() {

}

AMateria *Cure::clone() const {
	return new Cure(); // Create a new Cure instance
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl; // Specific message for Cure
}