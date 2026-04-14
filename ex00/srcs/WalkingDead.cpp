/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WalkingDead.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 10:27:03 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/14 10:32:30 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	return (new Zombie(name));
}

void randomChump( std::string name )
{
	Zombie zmb = Zombie(name);
	zmb.announce();
}
