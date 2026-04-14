/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 12:30:22 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/14 12:52:17 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string hello = "HI THIS IS BRAIN";
	std::string *stringPTR = &hello;
	std::string &stringREF = hello;

	std::cout << " Variable memory address: " << &hello << std::endl;
	std::cout << "stringPTR memory address: " << stringPTR << std::endl;
	std::cout << "stringREF memory address: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << " Variable value: " << hello << std::endl;
	std::cout << "stringPTR value: " << *stringPTR << std::endl;
	std::cout << "stringREF value: " << stringREF << std::endl;
	return (0);
}
