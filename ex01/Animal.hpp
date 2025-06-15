/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:00:14 by spitul            #+#    #+#             */
/*   Updated: 2025/06/15 10:37:13 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#define	GRY "\033[38;5;67m"
#define	SGG "\033[38;2;157;193;131m" // sage green
#define	MVP "\033[38;2;224;176;255m"
#define	ABG	"\033[38;2;169;92;104m"
#define	PBL	"\033[38;2;125;127;255m"
#define	ORG	"\033[38;2;255;140;0m"

#define RST "\033[0m"

#include <string>

class Animal
{
	protected:
		std::string	_type;
		
	public:
		Animal(void);
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual ~Animal(void);

		std::string	getType(void) const;

		virtual void	makeSound(void) const;
};



#endif
