/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allali <allali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 01:43:07 by allali            #+#    #+#             */
/*   Updated: 2026/02/05 01:44:10 by allali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap robotA("Clappy");
    ClapTrap robotB("Target-Dummy");

    std::cout << "\n--- FIGHT START ---" << std::endl;
    
    robotA.attack("Target-Dummy");
    robotB.takeDamage(0);


    robotA.beRepaired(5);

    std::cout << "\n--- CRITICAL HIT ---" << std::endl;
    robotB.takeDamage(20);
    robotB.attack("Clappy");
    robotB.beRepaired(10);
    std::cout << "\n--- ENERGY DRAIN TEST ---" << std::endl;
    for (int i = 0; i < 12; i++) {
        robotA.attack("Air");
    }
    std::cout << "\n--- DESTRUCTION ---" << std::endl;
    return 0;
}