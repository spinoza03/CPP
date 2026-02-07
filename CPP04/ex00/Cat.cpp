#include "Cat.hpp"

Cat::Cat() {
    this->type = "Cat";
    std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src) {
    std::cout << "Cat Copy Constructor called" << std::endl;
    *this = src;
}

Cat &Cat::operator=(const Cat &src) {
    std::cout << "Cat Assignment Operator called" << std::endl;
    if (this != &src) {
        this->type = src.type;
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow..." << std::endl;
}