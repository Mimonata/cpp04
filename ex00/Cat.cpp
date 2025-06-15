/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:36:37 by spitul            #+#    #+#             */
/*   Updated: 2025/06/15 10:43:38 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

Cat::Cat(void)	: Animal()
{
	_type = "Cat";
	std::cout << PBL << "Cat created" << RST << std::endl;
}

Cat::Cat(const Cat& other)	: Animal(other)
{
	std::cout << PBL << "Cat Copy constructor called" << RST << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << PBL << "Cat copy assignement called" << RST << std::endl;
	
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Cat::~Cat(void)
{
	std::cout << PBL << "Cat destroyed" << RST << std::endl;
}

std::string	Cat::getType(void) const
{
	return this->_type;
}

void	Cat::makeSound(void) const
{
	std::cout << PBL << "MEeeaaww" << RST << std::endl;
}
