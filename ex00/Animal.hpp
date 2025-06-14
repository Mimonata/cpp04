/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:00:14 by spitul            #+#    #+#             */
/*   Updated: 2025/06/14 18:31:09 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#define GRY "\033[38;5;67m"
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
		~Animal(void);
};



#endif
