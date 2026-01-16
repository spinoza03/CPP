/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allali <allali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 20:42:54 by allali            #+#    #+#             */
/*   Updated: 2026/01/16 20:54:04 by allali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){
	this->_weapon = NULL;
}


HumanB::~HumanB() {
}
void HumanB::setWeapon(Weapon& weapon) {
    this->_weapon = &weapon;
}
void HumanB::attack(){
	if(this->_weapon != NULL){
		std::cout << this->_name << " attack with thier " << this->_weapon->getType() << std::endl;
	} else {
        std::cout << this->_name << " has no weapon!" << std::endl;
    }
}