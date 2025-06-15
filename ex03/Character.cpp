#include "Character.hpp"

Character::Character() : _name("default") {
	std::cout << "Character default constructor called, name set to 'default'." << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
}

Character::Character(std::string name) : _name(name) {
	std::cout << "Character parameterized constructor called, name set to '" << name << "'." << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
}

Character::Character(const Character &other) {
	this->_name = other._name;
	std::cout << "Character copy constructor called, name set to '" << this->_name << "'." << std::endl;
	for (int i = 0; i < 4; i++) {
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
		else
		   this->_inventory[i] = NULL; // Ensure empty slots are set to NULL
	}
}

Character &Character::operator=(const Character &other) {
	if (this != &other) {
		this->_name = other._name;
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i]) {
				delete this->_inventory[i];
				this->_inventory[i] = NULL; // Avoid memory leak by deleting existing materia
			}
			if (other._inventory[i])
				this->_inventory[i] = other._inventory[i]->clone();
		}
	}
	std::cout << "Character assignment operator called, name set to '" << this->_name << "'." << std::endl;
	return *this;
}

Character::~Character() {
	std::cout << "Character destructor called for " << this->_name << "." << std::endl;
	for (int i = 0; i < 4; i++) {
		delete this->_inventory[i];
	}
}

std::string const &Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			std::cout << m->getType() << " materia has been equiped on slot " << i << " on " << this->getName() << std::endl;
			return ;
		}
	}
	std::cout << m->getType() << " materia cannot be equiped on " << this->getName() << " as all its slots are full!" << std::endl;
}

void Character::unequip(int i) {
	if (i >= 0 && i <= 3  && this->_inventory[i])
	{
		std::cout << this->getName() << ": unequiped " << _inventory[i]->getType() << " at slot " << i << std::endl;
		this->_inventory[i] = NULL;
	}
	else
		std::cout << this->getName() << ": unable to unequip, invalid index or empty slot." << std::endl;
}

void Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx <= 3 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << this->getName() << ": unable to use, invalid index or empty slot." << std::endl;
}