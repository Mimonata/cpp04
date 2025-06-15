/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 10:52:10 by spitul            #+#    #+#             */
/*   Updated: 2025/06/15 10:59:16 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void)	: _type("WrongAnimal")
{
	std::cout << YLW << "WrongAnimal created" << RST << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << YLW << "WrongAnimal Copy constructor called" << RST << std::endl;
	
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << YLW << "WrongAnimal copy assignement called" << RST << std::endl;
	
	if (this != &other)
		this->_type = other._type;
	return *this;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << YLW << "WrongAnimal destroyed" << RST << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return this->_type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << YLW << "WrongAnimal Wuuhh .. Wuuhh .. Mmm.." << RST << std::endl;
}
