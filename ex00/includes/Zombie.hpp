/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 13:16:19 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/10 13:52:24 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_H
# define ZOMBIE_H

# define GRUNT ": BraiiiiiiinnnzzzZ..."

# include <iostream>
# include <string>

class Zombie
{
private:
	std::string name;
public:
	void	set_name(std::string name);

	Zombie();
	~Zombie();
};

#endif
