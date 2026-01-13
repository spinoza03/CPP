/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 11:49:15 by ilallali          #+#    #+#             */
/*   Updated: 2026/01/13 09:43:07 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phone.hpp"

int main (){
	Phone book;
	std::string command;
	
	while(1){
		std::cout << "Enter a command : ";
		if(!std::getline(std::cin, command))
			break;
		if(command == "ADD"){
			book.addContact();
		}
		else if(command == "SEARCH"){
			book.searchContact();
		}
		else if(command == "EXIT"){
			break;
		}
		else if (!command.empty()) {
			std::cout << "Invalid Command: [SEARCH, ADD, EXIT]" << std::endl;
		}
	}
	return 0;
}