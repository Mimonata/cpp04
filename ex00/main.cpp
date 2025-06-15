/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:59:55 by spitul            #+#    #+#             */
/*   Updated: 2025/06/15 11:15:33 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
	
	std::cout << std::endl;
	
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	
	std::cout << wrongMeta->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	wrongMeta->makeSound(); //will output the cat sound!
	k->makeSound();
	
	delete wrongMeta;
	delete k;
	
	return 0;
}
