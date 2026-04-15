/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:07:10 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/15 12:25:03 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "Invalid input, should be `./replace <filename> <to_search> <replace_with>" << std::endl;
		return (1);
	}

	std::string filename = av[1];
	std::string to_search = av[2];
	std::string replace_with = av[3];

	std::fstream fs;
	fs.open(filename, std::fstream::in);

	fs.close();
	return (0);
}
