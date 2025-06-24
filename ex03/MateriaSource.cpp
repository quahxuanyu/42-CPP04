#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource default constructor called." << std::endl;
	for (int i = 0; i < 4; i++)
		this->_m_source[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	std::cout << "MateriaSource copy constructor called." << std::endl;
	for (int i = 0; i < 4; i++) {
		if (other._m_source[i])
			this->_m_source[i] = other._m_source[i]->clone(); // Deep copy of each AMateria
		else
		   this->_m_source[i] = NULL; // Ensure empty slots are set to NULL
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
	if (this != &other) {
		for (int i = 0; i < 4; i++) {
			if (this->_m_source[i]) {
				delete this->_m_source[i];
				this->_m_source[i] = NULL;
			}
			if  (other._m_source[i])
				this->_m_source[i] = other._m_source[i]->clone(); // Deep copy of each AMateria
		}
	}
	std::cout << "MateriaSource assignment operator called." << std::endl;
	return *this;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called." << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_m_source[i];
}

void MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (this->_m_source[i] == NULL) {
			this->_m_source[i] = m;
			std::cout << m->getType() << " has been learned at slot " << i << std::endl;
			return ;
		}
	}
	std::cout << m->getType() << " cannot be learned as all the slots are full." << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++) {
		if (this->_m_source[i] && this->_m_source[i]->getType() == type) {
			std::cout << type << " has been cloned from slot " << i << std::endl;
			return this->_m_source[i]->clone();
		}
	}
	std::cout << type << " cannot be cloned as it has not been learned!" << std::endl;
	return 0;
}