/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allali <allali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 11:39:47 by allali            #+#    #+#             */
/*   Updated: 2026/02/05 11:40:00 by allali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    std::cout << "--- CONSTRUCTING ---" << std::endl;
    ScavTrap robot("Serena");

    std::cout << "\n--- TESTING ATTACK ---" << std::endl;

    robot.attack("Target");

    std::cout << "\n--- TESTING SPECIAL ---" << std::endl;
    robot.guardGate();

    std::cout << "\n--- DESTRUCTING ---" << std::endl;
    return 0;
}