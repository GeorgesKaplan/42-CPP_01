/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 13:15:06 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/10 13:57:35 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << this->name << GRUNT << std::endl;
}

Zombie::~Zombie()
{}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}

Zombie* newZombie(std::string name)
{
	Zombie *zombie;

	zombie->set_name(name);
	return (zombie);
}
