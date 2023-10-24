/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:39:17 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/23 08:54:10 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

int main()
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wronganimal = new WrongAnimal();
	const WrongAnimal* notcat = new WrongCat();
	const WrongCat* wrongcat = new WrongCat();
	std::cout << "Animal -> " << animal->getType() << " " << std::endl;
	std::cout << "Dog -> " << dog->getType() << " " << std::endl;
	std::cout << "Cat -> " << cat->getType() << " " << std::endl;
	animal->makeSound();
	cat->makeSound(); //will output the wrongcat sound!
	dog->makeSound();
	std::cout << "Wrong animal -> " << wronganimal->getType() << " " << std::endl;
	std::cout << "Not cat -> " << notcat->getType() << " " << std::endl;
	std::cout << "Wrong cat -> " << wrongcat->getType() << " " << std::endl;
	wronganimal->makeSound();
	notcat->makeSound();
	wrongcat->makeSound();
	delete animal;
	delete dog;
	delete cat;
	delete wronganimal;
	delete notcat;
	delete wrongcat;
	return 0;
}