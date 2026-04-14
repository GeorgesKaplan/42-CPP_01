/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:10:15 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/14 15:26:10 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(std::string wtype)
{
	this->type = wtype;
}

std::string &Weapon::getType()
{
	return (this->type);
}

Weapon::Weapon(std::string wtype)
{
	this->setType(wtype);
}

Weapon::~Weapon()
{
}
