/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:10:15 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/23 15:38:02 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(std::string wtype)
{
	this->_type = wtype;
}

const std::string &Weapon::getType()
{
	return (this->_type);
}

Weapon::Weapon(std::string wtype)
{
	this->setType(wtype);
}

Weapon::Weapon(void)
{
}

Weapon::~Weapon()
{
}
