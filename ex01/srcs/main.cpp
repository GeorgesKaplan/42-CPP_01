/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 13:15:03 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/14 12:31:03 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
	int nb = 4;
	std::string name = "Romero";

	Zombie *horde = zombieHorde(nb, name);
	for (int i = 0; i < nb; i++)
	{
		horde[i].announce();
	}
	delete[](horde);
	return (0);
}
