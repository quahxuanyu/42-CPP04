#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP
#include <iostream>

/**
 * An interface is a class with ONLY virtual functions
 * It cannot have any implemented functions or contain member variables (conventionally no)
 */

class AMateria; // Forward declaration - needed for circular include (a include b, b include a)

class ICharacter {
    public:
        virtual ~ICharacter() {}
        virtual std::string const &getName() const = 0;
        virtual void equip(AMateria *m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};


#endif