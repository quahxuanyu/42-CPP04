#ifndef DOG_HPP
#define DOG_HPP
#include "AbAnimal.hpp"
#include "Brain.hpp"

class Dog : public AbAnimal {
	private:
		Brain *_brain;
	public: 
		Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		virtual ~Dog();
		void makeSound(void) const;
};
#endif