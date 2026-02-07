#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const Animal &src) {
    std::cout << "Animal Copy Constructor called" << std::endl;
    *this = src;
}

Animal &Animal::operator=(const Animal &src) {
    std::cout << "Animal Assignment Operator called" << std::endl;
    if (this != &src) {
        this->type = src.type;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal Destructor called" << std::endl;
}

std::string Animal::getType() const {
    return this->type;
}