/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 10:14:15 by ilallali          #+#    #+#             */
/*   Updated: 2026/01/13 10:27:11 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
	std::string zombiename;
	public:
	Zombie(std::string name);
	
	~Zombie();
	void announce();
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif