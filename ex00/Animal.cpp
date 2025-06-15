/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:00:06 by spitul            #+#    #+#             */
/*   Updated: 2025/06/15 10:44:04 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)	: _type("Animal")
{
	std::cout << GRY << "Animal created" << RST << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << GRY << "Animal Copy constructor called" << RST << std::endl;
	
	*this = other;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << GRY << "Animal copy assignement called" << RST << std::endl;
	
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Animal::~Animal(void)
{
	std::cout << GRY << "Animal destroyed" << RST << std::endl;
}

std::string	Animal::getType(void) const
{
	return this->_type;
}

void	Animal::makeSound(void) const
{
	std::cout << GRY << "MMwwwoorrrUUuuhh.." << RST << std::endl;
}
