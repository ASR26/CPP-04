/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:34:09 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/23 08:42:01 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Undefined wrong animal created" << std::endl;
	this->type = "Undefined wrong animal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Undefined wrong animal destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal)
{
	std::cout << "Undefined wrong animal copy constructor" << std::endl;
	this->type = wronganimal.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wronganimal)
{
	std::cout << "Undefined wrong animal operator called" << std::endl;
	this->type = wronganimal.type;
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "*Unrecognized wrong sounds*" << std::endl;
}