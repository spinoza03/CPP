#include "Cat.hpp"

Cat::Cat() {
    this->type = "Cat";
    this->_brain = new Brain();
    std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src) {
    this->_brain = new Brain(*src._brain);
    std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src) {
    std::cout << "Cat Assignment Operator called" << std::endl;
    if (this != &src) {
        Animal::operator=(src);
        delete this->_brain;
        this->_brain = new Brain(*src._brain);
    }
    return *this;
}

Cat::~Cat() {
    delete this->_brain;
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow..." << std::endl;
}