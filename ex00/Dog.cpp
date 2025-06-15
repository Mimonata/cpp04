/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 10:33:00 by spitul            #+#    #+#             */
/*   Updated: 2025/06/15 10:45:50 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>

Dog::Dog(void)	: Animal()
{
	_type = "Dog";
	std::cout << MVP << "Dog created" << RST << std::endl;
}

Dog::Dog(const Dog& other)	: Animal(other)
{
	std::cout << MVP << "Dog Copy constructor called" << RST << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << MVP << "Dog copy assignement called" << RST << std::endl;
	
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Dog::~Dog(void)
{
	std::cout << MVP << "Dog destroyed" << RST << std::endl;
}

std::string	Dog::getType(void) const
{
	return this->_type;
}

void	Dog::makeSound(void) const
{
	std::cout << MVP << "RuuFff" << RST << std::endl;
}
