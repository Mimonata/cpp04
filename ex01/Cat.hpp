/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:35:30 by spitul            #+#    #+#             */
/*   Updated: 2025/06/15 16:18:33 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat	: public Animal
{
	private:
		Brain	*brain;
	
	public:
		Cat(void);
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		~Cat(void);

		std::string	getType(void) const;
		
		void	setIdea(unsigned int i, const std::string idea);
		void	printIdea(unsigned int i);
		
		void	makeSound(void) const;
};

#endif
