/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:39:17 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/31 08:46:43 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

int main()
{
	Animal* animal[4] = {new Dog(), new Cat(), new Dog(), new Cat()};
	
	std::cout << "Primer animal -> " << animal[0]->getType() << std::endl;
	std::cout << "Segundo animal -> " << animal[1]->getType() << std::endl;
	std::cout << "Tercer animal -> " << animal[2]->getType() << std::endl;
	std::cout << "Cuarto animal -> " << animal[3]->getType() << std::endl;

	for (int i = 0; i < 4; i++)
		delete animal[i];
	
	Cat *cat = new Cat();
	Cat catcpy(*cat);
	Cat catequal = *cat;

	delete cat;

	std::cout << std::endl << "Cat ideas: " << std::endl;
	std::cout << catcpy.getBrain()->getIdeas(0) << std::endl;
	std::cout << catcpy.getBrain()->getIdeas(1) << std::endl;
	std::cout << catequal.getBrain()->getIdeas(0) << std::endl;
	std::cout << catequal.getBrain()->getIdeas(1) << std::endl << std::endl;

	return 0;
}