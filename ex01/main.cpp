/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:59:55 by spitul            #+#    #+#             */
/*   Updated: 2025/06/15 16:25:38 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	Animal	*animals[10];

	for (int i = 0; i < 10; i ++)
	{
		if (i < 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		if (i == 0)
			static_cast<Dog*>(animals[i])->setIdea(i, "Run happily through the field");
		if (i == 5)
			static_cast<Cat*>(animals[i])->setIdea(i, "Stretch in the sun");
		animals[i]->makeSound();
	}
	
	Animal	*Kitty = new Cat(*(static_cast<Cat*>(animals[5])));
	Animal	*Lassie = new Dog(*(static_cast<Dog*>(animals[0])));
	
	for (int i = 0; i < 10; i ++)
		delete animals[i];
	
	static_cast<Cat*>(Kitty)->printIdea(5);
	static_cast<Dog*>(Lassie)->printIdea(0);
	
	delete Kitty;
	delete Lassie;
	
	return 0;
}
