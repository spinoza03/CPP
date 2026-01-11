/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 15:32:11 by ilallali          #+#    #+#             */
/*   Updated: 2026/01/11 16:10:42 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact{
	private:
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _phonenumber;
	std::string _darkestsecret;

	public:
	
	void setFirstname(std::string first){
		_firstname = first;
	}
	
	void setLast(std::string last){
		_lastname = last;
	}

	void setNickname(std::string nick){
		_nickname = nick;
	}

	void setPhone(std::string phone){
		_phonenumber = phone;
	}

	void setDArk(std::string dark){
		_darkestsecret = dark;
	}

	std::string getFirst(){
		return _firstname;
	}
	
	std::string getlast(){
		return _lastname;
	}
	
	std::string getnick(){
		return _nickname;
	}

	std::string getPhone(){
		return _phonenumber;
	}
	
	std::string getdark(){
		return _darkestsecret;
	}
	
};

#endif