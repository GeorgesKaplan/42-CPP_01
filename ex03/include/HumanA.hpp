/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:10:09 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/14 16:16:49 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon		&_weapon;
public:
	void setName(std::string name);
	std::string getName();
	void setWeapon(Weapon weapon);
	Weapon getWeapon();
	void attack();

	HumanA(std::string name, Weapon &weapon);
	~HumanA();
};
