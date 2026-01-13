/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:01:48 by ilallali          #+#    #+#             */
/*   Updated: 2026/01/13 09:42:57 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phone.hpp"

Phone::Phone(){
	this->_index = 0;
}

Phone::~Phone() {}

std::string fixWidth(std::string str) {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

bool isStringPrintable(std::string str) {
    if (str.empty())
        return false;
    for (size_t i = 0; i < str.length(); i++) {
        if (!std::isprint(str[i]))
            return false;
    }
    return true;
}

void Phone::addContact(){
	std::string input;
	int i = this->_index % 8;
	
	input = "";
	while(!isStringPrintable(input)){
		std::cout << "Enter first name :";
		if (!std::getline(std::cin, input)) return;

		if (!isStringPrintable(input))
            std::cout << "Invalid input (empty or unprintable). Try again." << std::endl;
	}
	this->_contacts[i].setFirstname(input);
	
	input = "";
	while (!isStringPrintable(input)) {
		std::cout << "Enter Last Name: ";
        if (!std::getline(std::cin, input)) return;

		if (!isStringPrintable(input))
            std::cout << "Invalid input (empty or unprintable). Try again." << std::endl;
	}
	this->_contacts[i].setLast(input);
	
	input = "";
	while (!isStringPrintable(input)) {
		std::cout << "Enter nick name: ";
        if (!std::getline(std::cin, input)) return;

		if (!isStringPrintable(input))
            std::cout << "Invalid input (empty or unprintable). Try again." << std::endl;
	}
	this->_contacts[i].setNickname(input);
	
	input = "";
	while (!isStringPrintable(input)) {
		std::cout << "Enter Phone number: ";
        if (!std::getline(std::cin, input)) return;

		if (!isStringPrintable(input))
            std::cout << "Invalid input (empty or unprintable). Try again." << std::endl;
	}
	this->_contacts[i].setPhone(input);
	
	input = "";
	while (!isStringPrintable(input)) {
		std::cout << "Enter Last darkest secret: ";
        if (!std::getline(std::cin, input)) return;

		if (!isStringPrintable(input))
            std::cout << "Invalid input (empty or unprintable). Try again." << std::endl;
	}
	this->_contacts[i].setDArk(input);
	
	this->_index++;
    std::cout << "Contact added successfully to slot [" << i << "]" << std::endl;
}

void Phone::searchContact() {
	int total = this->_index;
    if (total > 8)
        total = 8;
	
    std::cout << "|" << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "|" << std::endl;
    for (int i = 0; i < total; i++) {
        std::cout << "|" << std::setw(10) << i << "|";
        std::cout << std::setw(10) << fixWidth(this->_contacts[i].getFirst()) << "|";
        std::cout << std::setw(10) << fixWidth(this->_contacts[i].getlast()) << "|";
        std::cout << std::setw(10) << fixWidth(this->_contacts[i].getnick()) << "|" << std::endl;
    }
	
    std::string input;
    std::cout << "Enter index to view details: ";
    if (!std::getline(std::cin, input)) return;
	
    if (input.length() == 1 && input[0] >= '0' && input[0] < ('0' + total)) {
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