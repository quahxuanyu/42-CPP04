#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure materia default constructor called." << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other) {
	std::cout << "Cure materia copy constructor called." << std::endl;
}

Cure &Cure::operator=(const Cure &other) {
	std::cout << "Cure materia assignment operator called." << std::endl;
	if (this != &other) {
		AMateria::operator=(other);
	}
	return *this;
}

Cure::~Cure() {
	std::cout << "Cure materia destructor called." << std::endl;
}

AMateria *Cure::clone() const {
	std::cout << "Cure materia clone called." << std::endl;
	return new Cure(); // Create a new Cure instance
}

void Cure::use(ICharacter &target) {
	
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl; // Specific message for Cure
}