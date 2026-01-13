/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:19:16 by ilallali          #+#    #+#             */
/*   Updated: 2026/01/13 09:42:21 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_HPP
# define PHONE_HPP

#include "Contact.hpp"

class Phone{

	private:
	Contact _contacts[8];
	int _index;

	public:
	Phone();

	~Phone();
	void addContact();
	void searchContact();
	
};

#endif