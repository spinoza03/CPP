/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allali <allali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 01:40:32 by allali            #+#    #+#             */
/*   Updated: 2026/02/05 01:41:12 by allali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// --- CONSTRUCTORS & DESTRUCTOR ---

// 1. Default Constructor
ClapTrap::ClapTrap() 
    : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap Default Constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) 
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << this->_name << " constructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
    std::cout << "ClapTrap Copy Constructor called." << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->_name << " destroyed." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
    std::cout << "ClapTrap Copy Assignment Operator called." << std::endl;
    if (this != &src) {
        this->_name = src._name;
        this->_hitPoints = src._hitPoints;
        this->_energyPoints = src._energyPoints;
        this->_attackDamage = src._attackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target) {
    if (this->_energyPoints > 0 && this->_hitPoints > 0) {
        this->_energyPoints--;
        std::cout << "ClapTrap " << this->_name << " attacks " << target 
                  << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "ClapTrap " << this->_name << " tries to attack but has no energy or health left!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hitPoints == 0) {
        std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
        return;
    }
    if (amount >= this->_hitPoints) {
        this->_hitPoints = 0;
    } else {
        this->_hitPoints -= amount;
    }

    std::cout << "ClapTrap " << this->_name << " takes " << amount 
              << " damage! Current HP: " << this->_hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_energyPoints > 0 && this->_hitPoints > 0) {
        this->_energyPoints--;
        this->_hitPoints += amount;
        std::cout << "ClapTrap " << this->_name << " repairs itself for " << amount 
                  << " HP! Current HP: " << this->_hitPoints << std::endl;
    } else {
        std::cout << "ClapTrap " << this->_name << " tries to repair but has no energy or health left!" << std::endl;
    }
}