/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 15:32:11 by ilallali          #+#    #+#             */
/*   Updated: 2026/01/12 12:59:07 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact{
	private:
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _phonenumber;
	std::string _darkestsecret;

	public:
		Contact();
		~Contact();

		void setFirstname(std::string first);
		void setLast(std::string last);
		void setNickname(std::string nick);
		void setPhone(std::string phone);
		void setDArk(std::string dark);

		std::string getFirst();
		std::string getlast();
		std::string getnick();
		std::string getPhone();
		std::string getdark();
};

#endif