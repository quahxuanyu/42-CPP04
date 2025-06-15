#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) {
	this->_type = type;
}

AMateria::AMateria() : _type("") {}

AMateria::AMateria(const AMateria &other) {
	this->_type = other._type;
}

AMateria &AMateria::operator=(const AMateria &other) {
	if (this != &other) {
		this->_type = other._type;
	}
	return *this;
}

AMateria::~AMateria() {
	 // No dynamic memory to free, so nothing to do here
}

std::string const &AMateria::getType() const {
	return this->_type;
}


// clone() is a pure virtual function, so it should not be defined here.

void AMateria::use(ICharacter &target) {
	 std::cout << "AMateria of type " << this->_type << " used on " << target.getName() << "." << std::endl;
}
