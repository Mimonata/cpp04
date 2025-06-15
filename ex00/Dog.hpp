/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 09:49:16 by spitul            #+#    #+#             */
/*   Updated: 2025/06/15 10:42:00 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog	: public Animal
{
	public:
		Dog(void);
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		~Dog(void);	

		std::string	getType(void) const;

		void	makeSound(void) const;
};

#endif
