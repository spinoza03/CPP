/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 15:32:11 by ilallali          #+#    #+#             */
/*   Updated: 2026/01/12 12:47:06 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact{
	private:
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _phonenumber;
	std::string _darkestsecret;

	public:
		// Constructor & Destructor
		Contact();
		~Contact();

		// Setters (Declarations ONLY - ending with ;)
		void setFirstname(std::string first);
		void setLast(std::string last);
		void setNickname(std::string nick);
		void setPhone(std::string phone);
		void setDArk(std::string dark);

		// Getters (Declarations ONLY - ending with ;)
		std::string getFirst();
		std::string getlast();
		std::string getnick();
		std::string getPhone();
		std::string getdark();
};

#endif