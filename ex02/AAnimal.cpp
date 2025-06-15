/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:00:06 by spitul            #+#    #+#             */
/*   Updated: 2025/06/15 16:47:07 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal(void)	: _type("AAnimal")
{
	std::cout << GRY << "AAnimal created" << RST << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
	std::cout << GRY << "AAnimal Copy constructor called" << RST << std::endl;
	
	*this = other;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	std::cout << GRY << "AAnimal copy assignement called" << RST << std::endl;
	
	if (this != &other)
		this->_type = other._type;
	return *this;
}

AAnimal::~AAnimal(void)
{
	std::cout << GRY << "AAnimal destroyed" << RST << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return this->_type;
}

void	AAnimal::makeSound(void) const
{
	std::cout << GRY << "MMwwwoorrrUUuuhh.." << RST << std::endl;
}
