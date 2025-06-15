/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 10:52:13 by spitul            #+#    #+#             */
/*   Updated: 2025/06/15 10:53:28 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#define YLW "\033[38;2;228;217;111m"
#define EGR "\033[38;2;80;200;120m"
#define RST "\033[0m"

#include <string>

class WrongAnimal
{
	protected:
		std::string	_type;
		
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal& operator=(const WrongAnimal& other);
		virtual ~WrongAnimal(void);

		std::string	getType(void) const;

		void	makeSound(void) const;
};


#endif
