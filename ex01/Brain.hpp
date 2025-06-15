/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 11:19:32 by spitul            #+#    #+#             */
/*   Updated: 2025/06/15 16:27:54 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
	private:
		static const int	_N = 100;
		std::string	_ideas[_N];

	public:
		Brain(void);
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		~Brain(void);

		const std::string*	getIdeas(void);
		const std::string	getIdea(unsigned int i);
		void	setIdea(unsigned int i, std::string idea);
		
};

#endif
