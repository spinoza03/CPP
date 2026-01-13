/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 14:44:53 by ilallali          #+#    #+#             */
/*   Updated: 2026/01/11 14:55:21 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else{
		for(int i = 1; i < ac; i++){
			std::string ag = av[i];
			for(size_t j = 0; j < ag.length(); j++){
				ag[j] = std::toupper(ag[j]);
			}
			std::cout << ag;
		}
	}
	std::cout << std::endl;
}
