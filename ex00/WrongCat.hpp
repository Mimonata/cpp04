/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 10:52:07 by spitul            #+#    #+#             */
/*   Updated: 2025/06/15 11:04:59 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat	: public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat& other);
		WrongCat& operator=(const WrongCat& other);
		~WrongCat(void);

		std::string	getType(void) const;

		void	makeSound(void) const;
};

#endif
