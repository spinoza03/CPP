#include "Dog.hpp"

Dog::Dog() {
    this->type = "Dog";
    this->_brain = new Brain();
    std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src) {
    this->_brain = new Brain(*src._brain);
    std::cout << "Dog Copy Constructor called" << std::endl;
}


Dog &Dog::operator=(const Dog &src) {
    std::cout << "Dog Assignment Operator called" << std::endl;
    if (this != &src) {
        Animal::operator=(src);
        delete this->_brain;
        this->_brain = new Brain(*src._brain);
    }
    return *this;
}

Dog::~Dog() {
    delete this->_brain;
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof woof!" << std::endl;
}