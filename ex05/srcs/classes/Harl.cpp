/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:33:39 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/16 12:47:13 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

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

}

Harl::Harl()
{
}

Harl::~Harl()
{
}
