/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allali <allali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 21:13:06 by allali            #+#    #+#             */
/*   Updated: 2026/01/16 21:14:34 by allali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h> 

class Rep {
private:
    std::string _filename;

public:
    Rep(std::string filename);
    ~Rep();

    void replace(std::string s1, std::string s2);
};

#endif