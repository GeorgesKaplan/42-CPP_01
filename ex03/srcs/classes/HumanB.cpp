/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:10:17 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/23 15:22:30 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setName(std::string name)
{
	this->_name = name;
}

std::string HumanB::getName()
{
	return (this->_name);
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

Weapon HumanB::getWeapon()
{
	return *(_weapon);
}

void HumanB::attack()
{
	if (this->_weapon == NULL)
	{
		std::cout << this->getName() << " attacks with their bare hands" << std::endl;
		return ;
	}
	std::cout << this->getName() << " attacks with " << this->getWeapon().getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
	this->_weapon = NULL;
	this->setName(name);
}

HumanB::~HumanB()
{
}
