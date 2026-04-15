/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:10:17 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/14 16:22:12 by dnantet          ###   ########.fr       */
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

void HumanB::setWeapon(Weapon weapon)
{
	this->_weapon = &weapon;
}

Weapon HumanB::getWeapon()
{
	return *(_weapon);
}

void HumanB::attack()
{
	std::cout << this->getName() << " attacks with " << this->getWeapon().getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
	this->setName(name);
}

HumanB::~HumanB()
{
}
