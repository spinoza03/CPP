/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:01:48 by ilallali          #+#    #+#             */
/*   Updated: 2026/01/12 12:54:40 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phone.hpp"

phone::phone(){
	this->_index = 0;
}

phone::~phone() {}

std::string fixWidth(std::string str) {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void phone::addContact(){
	std::string input;
	int i = this->_index % 8;
	
	input = "";
	while(input.empty()){
		std::cout << "Enter first name :";
		if (!std::getline(std::cin, input)) return;
	}
	this->_contacts[i].setFirstname(input);
	
	input = "";
	while (input.empty()) {
		std::cout << "Enter Last Name: ";
        if (!std::getline(std::cin, input)) return;
	}
	this->_contacts[i].setLast(input);
	
	input = "";
	while (input.empty()) {
		std::cout << "Enter nick name: ";
        if (!std::getline(std::cin, input)) return;
	}
	this->_contacts[i].setNickname(input);
	
	input = "";
	while (input.empty()) {
		std::cout << "Enter phone number: ";
        if (!std::getline(std::cin, input)) return;
	}
	this->_contacts[i].setPhone(input);
	
	input = "";
	while (input.empty()) {
		std::cout << "Enter Last darkest secret: ";
        if (!std::getline(std::cin, input)) return;
	}
	this->_contacts[i].setDArk(input);
	
	this->_index++;
    std::cout << "Contact added successfully to slot [" << i << "]" << std::endl;
}

void phone::searchContact() {
    std::cout << "|" << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "|" << std::endl;
    for (int i = 0; i < 8; i++) {
        std::cout << "|" << std::setw(10) << i << "|";
        std::cout << std::setw(10) << fixWidth(this->_contacts[i].getFirst()) << "|";
        std::cout << std::setw(10) << fixWidth(this->_contacts[i].getlast()) << "|";
        std::cout << std::setw(10) << fixWidth(this->_contacts[i].getnick()) << "|" << std::endl;
    }
    std::string input;
    std::cout << "Enter index to view details: ";
    if (!std::getline(std::cin, input)) return;
    if (input.length() == 1 && input[0] >= '0' && input[0] <= '7') {
        int i = input[0] - '0';
        if (this->_contacts[i].getFirst().empty()) {
            std::cout << "No contact at this index." << std::endl;
        } else {
            std::cout << "First Name: " << this->_contacts[i].getFirst() << std::endl;
            std::cout << "Last Name: " << this->_contacts[i].getlast() << std::endl;
            std::cout << "Nickname: " << this->_contacts[i].getnick() << std::endl;
            std::cout << "Phone: " << this->_contacts[i].getPhone() << std::endl;
            std::cout << "Secret: " << this->_contacts[i].getdark() << std::endl;
        }
    } else {
        std::cout << "Invalid index!" << std::endl;
    }
}