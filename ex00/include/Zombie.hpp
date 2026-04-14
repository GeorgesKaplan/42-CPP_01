/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 13:16:19 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/12 13:52:40 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# define GRUNT ": BraiiiiiiinnnzzzZ..."

# include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	void announce(void);

	Zombie(std::string name);
	~Zombie(void);
};

#endif
