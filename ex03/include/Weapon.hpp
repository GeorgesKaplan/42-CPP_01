/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:10:24 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/23 15:37:45 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
private:
	std::string _type;

public:
	void		setType(std::string wtype);
	/*Returns a constant reference to `type`*/
	const std::string	&getType();

	Weapon(std::string wtype);
	Weapon(void);
	~Weapon();
};

#endif
