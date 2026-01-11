/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:19:16 by ilallali          #+#    #+#             */
/*   Updated: 2026/01/11 16:33:25 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_HPP
# define PHONE_HPP

#include "contact.hpp"

class phone{

	private:
	Contact _contacts[8];
	int _index;
	int _count;

	public:
	phone();

	~phone();
    void addContact();
    void searchContact();
	
};

#endif