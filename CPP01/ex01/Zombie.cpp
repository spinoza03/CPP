/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 11:27:41 by ilallali          #+#    #+#             */
/*   Updated: 2026/01/13 11:36:42 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	this->zombiename = "";
}

void Zombie::setname(std::string name){
	this->zombiename = name;
}

Zombie::~Zombie() {
    std::cout << this->zombiename << ": back to ground (died)" << std::endl;
}

void Zombie::announce(void) {
    std::cout << this->zombiename << ": BraiiiiiiinnnzzzZ..." << std::endl;
}