/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   man.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 12:08:14 by ilallali          #+#    #+#             */
/*   Updated: 2026/01/20 12:08:51 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl harl;

    std::cout << "--- Level: DEBUG ---" << std::endl;
    harl.complain("DEBUG");

    std::cout << "\n--- Level: INFO ---" << std::endl;
    harl.complain("INFO");

    std::cout << "\n--- Level: WARNING ---" << std::endl;
    harl.complain("WARNING");

    std::cout << "\n--- Level: ERROR ---" << std::endl;
    harl.complain("ERROR");

    std::cout << "\n--- Level: UNKNOWN (Should do nothing) ---" << std::endl;
    harl.complain("FOOBAR");

    return 0;
}