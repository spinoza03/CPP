/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:19:16 by ilallali          #+#    #+#             */
/*   Updated: 2026/01/12 12:50:46 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_HPP
# define PHONE_HPP

#include "Contact.hpp"

class phone{

	private:
	Contact _contacts[8];
	int _index;

	public:
	phone();

	~phone();
	void addContact();
	void searchContact();
	
};

#endif