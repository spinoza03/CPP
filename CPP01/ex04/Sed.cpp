/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:11:06 by ilallali          #+#    #+#             */
/*   Updated: 2026/01/20 11:02:23 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"


Sed::Sed(std::string filename) : _filename(filename) {}

Sed::~Sed(){}

void Sed::replace(std::string s1, std::string s2){
	std::ifstream infile(_filename.c_str());
	std::string content;
	std::string line;

	if(!infile.is_open()){
		std::cerr << "File not open" << std::endl;
		return;
	}
	std::string newfile = _filename + ".replace";
	
	std::ofstream outfile(newfile.c_str());
	if(!outfile.is_open()){
		std::cerr << "outfile not open" << std::endl;
		infile.close();
		return;
	}
	while (std::getline(infile, line)) {
    content += line;
    if (!infile.eof())
        content += "\n";
	}
	if(!s1.empty()){
		size_t pos = 0;
	
		while (1) {
		pos = content.find(s1,pos);
		if(pos == std::string::npos){
			break;
		}
		content.erase(pos, s1.length());
		content.insert(pos,s2);
		
		pos += s2.length();
		}
	}
	outfile << content;
	infile.close();
	outfile.close();
}