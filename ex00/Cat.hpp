#ifndef CAT_CPP
#define CAT_CPP
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		virtual ~Cat();
		void makeSound(void) const;
};

#endif