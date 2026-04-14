/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:10:24 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/14 15:49:46 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
private:
	std::string type;

public:
	void		setType(std::string wtype);
	/*Returns a constant reference to `type`*/
	std::string	&getType();

	Weapon(std::string wtype);
	Weapon(void);
	~Weapon();
};

#endif
