/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:07:10 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/15 13:30:01 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "Invalid input, should be `./replace <infile> <to_search> <replace_with>" << std::endl;
		return (1);
	}

	char *infile = av[1];
	std::string to_search = av[2];
	std::string replace_with = av[3];

	std::fstream fs;
	fs.open(infile, std::fstream::in);
	if (!fs)
	{
		std::cout << "Error: Couldn't open file '" << infile << "'." << std::endl;
		return (1);
	}

	std::ofstream ofs;
	ofs.open(((std::string)infile + ".replace").c_str());
	if (!fs)
	{
		std::cout << "Error: Couldn't create '" << infile << ".replace'." << std::endl;
		return (1);
	}


	// std::string line;
	// while (getline(fs, line))
	// {
	// 	std::cout << line << std::endl;
	// }


	fs.close();
	return (0);
}
