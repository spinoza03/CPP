/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allali <allali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 01:58:37 by allali            #+#    #+#             */
/*   Updated: 2026/02/05 01:58:42 by allali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// --- CONSTRUCTORS & DESTRUCTOR ---

ScavTrap::ScavTrap() : ClapTrap() {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap " << this->_name << " constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src) {
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->_name << " destroyed" << std::endl;
}


ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
    std::cout << "ScavTrap Assignment Operator called" << std::endl;
    if (this != &src) {
        ClapTrap::operator=(src);
    }
    return *this;
}


void ScavTrap::attack(const std::string& target) {
    if (this->_energyPoints > 0 && this->_hitPoints > 0) {
        this->_energyPoints--;
        std::cout << "ScavTrap " << this->_name << " attacks " << target 
                  << " violently, causing " << this->_attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "ScavTrap " << this->_name << " is out of energy." << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode." << std::endl;
}