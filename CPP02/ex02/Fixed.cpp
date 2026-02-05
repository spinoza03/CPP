/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allali <allali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 01:11:12 by allali            #+#    #+#             */
/*   Updated: 2026/02/05 01:17:31 by allali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// --- Constructors & Destructor ---

Fixed::Fixed() : _fixedPointValue(0) {
}

Fixed::Fixed(const int n) {
    this->_fixedPointValue = n << _bits;
}

Fixed::Fixed(const float f) {
    this->_fixedPointValue = roundf(f * (1 << _bits));
}

Fixed::Fixed(const Fixed &src) {
    *this = src;
}

Fixed::~Fixed() {
}

// --- Assignment Operator ---

Fixed &Fixed::operator=(const Fixed &src) {
    if (this != &src) {
        this->_fixedPointValue = src.getRawBits();
    }
    return *this;
}

// --- Getters & Setters ---

int Fixed::getRawBits(void) const {
    return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
    this->_fixedPointValue = raw;
}

// --- Conversions ---

float Fixed::toFloat(void) const {
    return (float)this->_fixedPointValue / (1 << _bits);
}

int Fixed::toInt(void) const {
    return this->_fixedPointValue >> _bits;
}

// --- Comparison Operators ---

bool Fixed::operator>(const Fixed &other) const {
    return this->_fixedPointValue > other.getRawBits();
}

bool Fixed::operator<(const Fixed &other) const {
    return this->_fixedPointValue < other.getRawBits();
}

bool Fixed::operator>=(const Fixed &other) const {
    return this->_fixedPointValue >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed &other) const {
    return this->_fixedPointValue <= other.getRawBits();
}

bool Fixed::operator==(const Fixed &other) const {
    return this->_fixedPointValue == other.getRawBits();
}

bool Fixed::operator!=(const Fixed &other) const {
    return this->_fixedPointValue != other.getRawBits();
}

// --- Arithmetic Operators ---

Fixed Fixed::operator+(const Fixed &other) const {
    Fixed result;
    result.setRawBits(this->_fixedPointValue + other.getRawBits());
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const {
    Fixed result;
    result.setRawBits(this->_fixedPointValue - other.getRawBits());
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const {
    Fixed result;
    result.setRawBits(((long)this->_fixedPointValue * (long)other.getRawBits()) >> _bits);
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const {
    Fixed result;
    result.setRawBits(((long)this->_fixedPointValue << _bits) / other.getRawBits());
    return result;
}

Fixed &Fixed::operator++() {
    this->_fixedPointValue++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    this->_fixedPointValue++;
    return temp;
}

Fixed &Fixed::operator--() {
    this->_fixedPointValue--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    this->_fixedPointValue--;
    return temp;
}

// --- Min / Max Functions ---

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}

// --- Global Stream Insertion Operator ---

std::ostream &operator<<(std::ostream &o, Fixed const &i) {
    o << i.toFloat();
    return o;
}