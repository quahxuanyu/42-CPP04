#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP
#include <iostream>
#include "AMateria.hpp"

/**
 * An interface is a class with ONLY virtual functions
 * It cannot have any implemented functions or contain member variables (conventionally no)
 */

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria *m) = 0;
		virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif