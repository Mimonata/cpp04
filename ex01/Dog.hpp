/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 09:49:16 by spitul            #+#    #+#             */
/*   Updated: 2025/06/15 16:11:58 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog	: public Animal
{
	private:
		Brain	*brain;
		
	public:
		Dog(void);
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		~Dog(void);	

		std::string	getType(void) const;

		void	setIdea(unsigned int i, const std::string idea);
		void	printIdea(unsigned int i);
		
		void	makeSound(void) const;
};

#endif
