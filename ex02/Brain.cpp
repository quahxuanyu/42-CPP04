#include "Brain.hpp"

Brain::Brain(void) {
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other) {
    std::cout << "Brain copy constructor called" << std::endl;
    for (size_t i = 0; i < 100; i++) {
        this->_ideas[i] = other._ideas[i];
    }
}

Brain &Brain::operator=(const Brain &other) {
    std::cout << "Brain assignement operator called" << std::endl;
    for (size_t i = 0; i < 100; i++) {
        this->_ideas[i] = other._ideas[i];
    }
    return *this;
}

Brain::~Brain(void) {
    std::cout << "Brain destructor called" << std::endl;
}
