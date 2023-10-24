/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:39:53 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/20 11:25:33 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog created" << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog destroyed" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	std::cout << "Dog copy constructor" << std::endl;
	this->type = dog.type;
}

Dog &Dog::operator=(const Dog &dog)
{
	std::cout << "Dog operator called" << std::endl;
	this->type = dog.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "*Whoof*" << std::endl;
}