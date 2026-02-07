#include "Dog.hpp"

Dog::Dog() {
    this->type = "Dog";
    std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src) {
    std::cout << "Dog Copy Constructor called" << std::endl;
    *this = src;
}

Dog &Dog::operator=(const Dog &src) {
    std::cout << "Dog Assignment Operator called" << std::endl;
    if (this != &src) {
        this->type = src.type;
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof woof!" << std::endl;
}