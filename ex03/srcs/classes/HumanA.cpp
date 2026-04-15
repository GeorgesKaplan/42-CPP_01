/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:10:21 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/14 16:16:51 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::setName(std::string name)
{
	this->_name = name;
}

std::string HumanA::getName()
{
	return (this->_name);
}

void HumanA::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}

Weapon HumanA::getWeapon()
{
	return (this->_weapon);
}

void HumanA::attack()
{
	std::cout << this->getName() << " attacks with " << this->getWeapon().getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon)
{
	this->setName(name);
	this->setWeapon(weapon);
}

HumanA::~HumanA()
{
}
