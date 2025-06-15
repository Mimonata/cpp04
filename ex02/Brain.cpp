/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 11:19:25 by spitul            #+#    #+#             */
/*   Updated: 2025/06/15 16:29:07 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	
	for (int i = 0; i < _N; i ++)
		this->_ideas[i] = other._ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain copy assignement called" << std::endl;
	
	if (this != &other)
	{
		for (int i = 0; i < _N; i ++)
			this->_ideas[i] = other._ideas[i];
	}
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain destroyed" << std::endl;
}

const std::string*	Brain::getIdeas(void)
{
	return this->_ideas;
}

const std::string	Brain::getIdea(unsigned int i)
{
	if (i < _N)
		return this->_ideas[i];
	std::cout << "Idea index out of range" << std::endl;
	return "";
}

void	Brain::setIdea(unsigned int i, std::string idea)
{
	if (i > _N - 1)
	{
		std::cout << "Idea index out of range" << std::endl;
		return ;
	}
	this->_ideas[i] = idea;
}
