/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:10:25 by ilallali          #+#    #+#             */
/*   Updated: 2026/01/20 11:02:34 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <cstddef>
#include <ostream>

class Sed {
private:
    std::string _filename;
public:
    Sed(std::string filename);
    ~Sed();

    void replace(std::string s1, std::string s2);
};

#endif