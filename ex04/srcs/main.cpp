/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:07:10 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/16 11:50:05 by dnantet          ###   ########.fr       */
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
	char *to_search = av[2];
	char *replace_with = av[3];

	if ((std::string)to_search == "" || (std::string)replace_with == "")
	{
		std::cout << "Error: <to_search> and <replace_with> can't be empty strings." << std::endl;
		return (1);
	}

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

	std::string line;
	std::string txt;
	while (getline(fs, line))
	{
		txt += line + "\n";
	}

	int pos = 0;
	for (size_t i = 0; i < txt.size(); i++)
	{
		pos = txt.find(to_search, i);
		if (pos != -1 && pos == (int)i)
		{
			ofs << replace_with;
			i += std::string(to_search).size() - 1;
		}
		else
			ofs << txt[i];
	}

	fs.close();
	ofs.close();
	return (0);
}
