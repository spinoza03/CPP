
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
    *this = src;
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src) {
    if (this != &src) {
        this->type = src.type;
    }
    std::cout << "WrongAnimal Assignment Operator called" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal generic sound" << std::endl;
}

std::string WrongAnimal::getType() const {
    return this->type;
}