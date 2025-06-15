/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 10:33:00 by spitul            #+#    #+#             */
/*   Updated: 2025/06/15 16:36:48 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>

Dog::Dog(void)	: Animal()
{
	_type = "Dog";
	brain = new Brain();
	std::cout << MVP << "Dog created" << RST << std::endl;
}

Dog::Dog(const Dog& other)	: Animal(other)
{
	std::cout << MVP << "Dog Copy constructor called" << RST << std::endl;
	_type = other._type;
	brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << MVP << "Dog copy assignement called" << RST << std::endl;
	
	if (this != &other)
	{
		_type = other._type;
		delete brain;
		brain = new Brain(*other.brain);
	}
	return *this;
}

Dog::~Dog(void)
{
	
	delete brain;
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

void	Dog::setIdea(unsigned int i, const std::string idea)
{
	this->brain->setIdea(i, idea);
}

void	Dog::printIdea(unsigned int i)
{
	std::cout << MVP << "Dog " << this->brain->getIdea(i) << RST << std::endl;
}
