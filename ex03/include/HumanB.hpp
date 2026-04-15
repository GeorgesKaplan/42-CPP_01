/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:10:27 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/15 11:38:41 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon		*_weapon;
public:
	void setName(std::string name);
	std::string getName();
	void setWeapon(Weapon &weapon);
	Weapon getWeapon();
	void attack();

	HumanB(std::string name);
	~HumanB();
};
