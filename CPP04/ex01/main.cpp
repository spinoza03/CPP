#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    std::cout << "--- SUBJECT TEST (Array of Animals) ---" << std::endl;
    
    const int count = 10;
    Animal* animals[count];

    for (int i = 0; i < count / 2; i++) {
        animals[i] = new Dog();
    }
    for (int i = count / 2; i < count; i++) {
        animals[i] = new Cat();
    }

    std::cout << "\n--- DELETING ANIMALS ---" << std::endl;

    for (int i = 0; i < count; i++) {
        delete animals[i];
    }

    std::cout << "\n--- DEEP COPY TEST ---" << std::endl;
    Dog basic;
    {
        Dog tmp = basic;
    }

    std::cout << "---------------------------------------" << std::endl;
    return 0;
}