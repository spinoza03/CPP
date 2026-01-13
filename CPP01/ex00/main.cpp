/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 10:43:47 by ilallali          #+#    #+#             */
/*   Updated: 2026/01/13 11:00:38 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    std::cout << "--- Testing randomChump (Stack) ---" << std::endl;
    randomChump("Chump"); 
    std::cout << std::endl;
    std::cout << "--- Testing newZombie (Heap) ---" << std::endl;
    Zombie* heapZ = newZombie("Foo"); 
    if (heapZ == NULL) {
        std::cout << "Allocation failed" << std::endl;
        return 1;
    }
    heapZ->announce();
    std::cout << "--- Deleting Heap Zombie ---" << std::endl;
    delete heapZ;
    return 0;
}