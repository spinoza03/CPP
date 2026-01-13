/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 11:22:23 by ilallali          #+#    #+#             */
/*   Updated: 2026/01/13 11:27:24 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
	std::string zombiename;
	public:
	Zombie();
	Zombie(std::string name);
	
	~Zombie();
	void announce();
	void setname(std::string name);
};
void randomChump(std::string name);
Zombie* zombieHorde( int N, std::string name );

#endif