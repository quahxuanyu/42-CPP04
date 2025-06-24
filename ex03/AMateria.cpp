#include "AMateria.hpp"

AMateria::AMateria() : _type("") {
	std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::AMateria(std::string const &type) {
	std::cout << "AMateria parameterized constructor called with type: " << type << std::endl;
	this->_type = type;
}

AMateria::AMateria(const AMateria &other) {
	std::cout << "AMateria copy constructor called." << std::endl;
	this->_type = other._type;
}

AMateria &AMateria::operator=(const AMateria &other) {
	std::cout << "AMateria assignment operator called." << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return *this;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called for type: " << this->_type << std::endl;
}

std::string const &AMateria::getType() const {
	return this->_type;
}


// clone() is a pure virtual function, so it should not be defined here.

void AMateria::use(ICharacter &target) {
	 std::cout << "AMateria of type " << this->_type << " used on " << target.getName() << "." << std::endl;
}
