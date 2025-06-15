/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:36:37 by spitul            #+#    #+#             */
/*   Updated: 2025/06/15 16:49:05 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

Cat::Cat(void)	: AAnimal()
{
	_type = "Cat";
	brain = new Brain();
	std::cout << PBL << "Cat created" << RST << std::endl;
}

Cat::Cat(const Cat& other)	: AAnimal(other)
{
	std::cout << PBL << "Cat Copy constructor called" << RST << std::endl;
	_type = other._type;
	brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << PBL << "Cat copy assignement called" << RST << std::endl;
	
	if (this != &other)
	{
		this->_type = other._type;
		delete brain;
		brain = new Brain(*other.brain);	
	}
	return *this;
}

Cat::~Cat(void)
{
	delete brain;
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

void	Cat::setIdea(unsigned int i, const std::string idea)
{
	this->brain->setIdea(i, idea);
}

void	Cat::printIdea(unsigned int i)
{
	std::cout << PBL << "Cat " << this->brain->getIdea(i) << RST << std::endl;
}
