#ifndef ABANIMAL_HPP
#define ABANIMAL_HPP
#include <iostream>

/**
 * To make a Class not instantiatble on its own, you need at least one PURE VIRTUAL FUNCTION
 * e.g virtual void makeSound(void) const = 0;
 * This makes the class an "Abstract Class", which means the function is not defined yet and thus an object cannot be instantiated from the class
 */

class AbAnimal {
	protected:
		std::string _type;
	public:
		AbAnimal();
		AbAnimal(const AbAnimal &other);
		AbAnimal &operator=(const AbAnimal &other);
		virtual ~AbAnimal();
		std::string getType(void) const; 
		virtual void makeSound(void) const = 0;
};

#endif