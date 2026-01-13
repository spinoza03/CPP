/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 11:47:16 by ilallali          #+#    #+#             */
/*   Updated: 2026/01/13 11:52:42 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 5;

	std::cout << "creating the hord" << std::endl;
	Zombie* myhord = zombieHorde(N, "hordemember");
	std::cout << "announcing" << std::endl;
	for(int i = 0 ; i < N; i++){
		myhord[i].announce();
	}
	std::cout << "delete hords" << std::endl;
	delete[] myhord;
	return 0;
}