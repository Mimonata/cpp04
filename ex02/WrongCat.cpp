/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 10:52:03 by spitul            #+#    #+#             */
/*   Updated: 2025/06/15 11:07:23 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat(void)	: WrongAnimal()
{
	_type = "WrongCat";
	std::cout << EGR << "WrongCat created" << RST << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)	: WrongAnimal(other)
{
	std::cout << EGR << "WrongCat Copy constructor called" << RST << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << EGR << "WrongCat copy assignement called" << RST << std::endl;
	
	if (this != &other)
		this->_type = other._type;
	return *this;
}

WrongCat::~WrongCat(void)
{
	std::cout << EGR << "WrongCat destroyed" << RST << std::endl;
}

std::string	WrongCat::getType(void) const
{
	return this->_type;
}

void	WrongCat::makeSound(void) const
{
	std::cout << EGR << "WrongCat MEeeaaww" << RST << std::endl;
}
