/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 13:15:03 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/14 10:34:26 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
	Zombie *zmb = newZombie("Rob");
	zmb->announce();
	delete(zmb);
	randomChump("Michael");
}
