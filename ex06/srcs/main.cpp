/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:07:10 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/16 16:33:19 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "Harl needs an argument to start working." << std::endl;
		return (1);
	}

	Harl harl;
	std::string cmd = av[1];

	harl.complain(cmd);
	return (0);
}
