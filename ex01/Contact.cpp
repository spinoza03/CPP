/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:41:43 by ilallali          #+#    #+#             */
/*   Updated: 2026/01/12 12:49:10 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}

void Contact::setFirstname(std::string first) {
    this->_firstname = first;
}

void Contact::setLast(std::string last) {
    this->_lastname = last;
}

void Contact::setNickname(std::string nick) {
    this->_nickname = nick;
}

void Contact::setPhone(std::string phone) {
    this->_phonenumber = phone;
}

void Contact::setDArk(std::string dark) {
    this->_darkestsecret = dark;
}

std::string Contact::getFirst() {
    return this->_firstname;
}

std::string Contact::getlast() {
    return this->_lastname;
}

std::string Contact::getnick() {
    return this->_nickname;
}

std::string Contact::getPhone() {
    return this->_phonenumber;
}

std::string Contact::getdark() {
    return this->_darkestsecret;
}