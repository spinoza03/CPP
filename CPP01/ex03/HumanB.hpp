/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allali <allali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 20:20:35 by allali            #+#    #+#             */
/*   Updated: 2026/01/16 20:58:37 by allali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB__HPP
# define HUMANB__HPP

#include "HumanA.hpp"
class HumanB{
	
	std::string _name;
	Weapon* _weapon;
	
	public:
	HumanB(std::string name);
	~HumanB();
	void attack();
	void setWeapon(Weapon& weapon);
};
#endif