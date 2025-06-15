/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:59:55 by spitul            #+#    #+#             */
/*   Updated: 2025/06/15 17:01:11 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	AAnimal	*animals[10];
	//AAnimal	testAnimal;

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
	
	AAnimal	*Kitty = new Cat(*(static_cast<Cat*>(animals[5])));
	AAnimal	*Lassie = new Dog(*(static_cast<Dog*>(animals[0])));
	
	for (int i = 0; i < 10; i ++)
		delete animals[i];
	
	static_cast<Cat*>(Kitty)->printIdea(5);
	static_cast<Dog*>(Lassie)->printIdea(0);
	
	delete Kitty;
	delete Lassie;
	
	return 0;
}
