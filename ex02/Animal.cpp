/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:34:09 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/24 11:15:00 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Undefined animal created" << std::endl;
	this->type = "undefined animal";
}

Animal::~Animal()
{
	std::cout << "Undefined animal destroyed" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Undefined animal copy constructor" << std::endl;
	this->type = animal.type;
}

Animal &Animal::operator=(const Animal &animal)
{
	std::cout << "Undefined animal operator called" << std::endl;
	this->type = animal.type;
	return (*this);
}

std::string	Animal::getType() const
{
	return this->type;
}
