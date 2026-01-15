/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:28:05 by ilallali          #+#    #+#             */
/*   Updated: 2026/01/15 12:42:30 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon{
	std::string _type;
	
	public:
	
	Weapon(std::string _type);
	~Weapon();
	const std::string& getType();
	void setType(std::string type);
};
#endif