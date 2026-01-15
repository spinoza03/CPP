/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:13:59 by ilallali          #+#    #+#             */
/*   Updated: 2026/01/15 12:50:57 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
	std::string _name;
	Weapon& _weapon;
	
	public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void attack();
	
};
#endif