/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 13:15:06 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/12 13:59:51 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << this->_name << GRUNT << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie '" << this->_name << "' has risen!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie '" << this->_name << "' has been sent back six feet under." << std::endl;
}

Zombie* newZombie(std::string name)
{
	return (new Zombie(name));
}
