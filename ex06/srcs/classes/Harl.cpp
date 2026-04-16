/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:33:39 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/16 15:25:14 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::invalid(void)
{
	std::cout << "Harl has no idea what you're talking about." << std::endl;
}

void Harl::debug(void)
{
	std::cout << "Debug: There are no bugs... Yet." << std::endl;
}

void Harl::info(void)
{
	std::cout << "Info: Harl is not here to be nice to you." << std::endl;
}

void Harl::warning(void)
{
	std::cout << "Warning: Your code is ugly." << std::endl;
}

void Harl::error(void)
{
	std::cout << "Error: Your code is broken. Did you ask an AI to do it?" << std::endl;
}

void Harl::complain(std::string level)
{
	const char		*enum_elts[_LEVEL_END] = {"INVALID", "DEBUG", "INFO", "WARNING", "ERROR"};

	size_t index = 0;
	for (size_t i = 0; i < _LEVEL_END  && level.compare(enum_elts[i]); i++)
		index++;

	switch (index)
	{
		case DEBUG:
			debug();
			info();
			warning();
			error();
			break ;
		case INFO:
			info();
			warning();
			error();
			break ;
		case WARNING:
			warning();
			error();
			break ;
		case ERROR:
			error();
			break ;
		default:
			invalid();
	}
}

Harl::Harl()
{
	std::cout << "Harl has come to review your code." << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl has had enough of this." << std::endl;
}
