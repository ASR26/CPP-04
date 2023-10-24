/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:39:53 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/24 09:08:47 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog created" << std::endl;
	this->brain = new Brain();
	this->type = "Dog";
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destroyed" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	std::cout << "Dog copy constructor" << std::endl;
	this->brain = new Brain(*(dog.brain));
	this->type = dog.type;
}

Dog &Dog::operator=(const Dog &dog)
{
	std::cout << "Dog operator called" << std::endl;
	*(this->brain) = *(dog.brain);
	this->type = dog.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "*Whoof*" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (this->brain);
}