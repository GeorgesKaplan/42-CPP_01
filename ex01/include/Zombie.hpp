/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 13:16:19 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/14 11:05:45 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	void setName(std::string name);

	Zombie(std::string name);
	Zombie();
	~Zombie(void);
};

#endif
