/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:35:47 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/16 13:40:44 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
private:
	enum Level {
		INVALID,
		DEBUG,
		INFO,
		WARNING,
		ERROR,
		_LEVEL_END,
	};

	void invalid(void);
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

public:
	void complain(std::string level);
	Harl();
	~Harl();
};

typedef	void (Harl::*ptr_func)(void);

#endif
