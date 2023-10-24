/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:39:53 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/24 09:08:26 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat created" << std::endl;
	this->brain = new Brain();
	this->type = "Cat";
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destroyed" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	std::cout << "Cat copy constructor" << std::endl;
	this->brain = new Brain(*(cat.brain));
	this->type = cat.type;
}

Cat &Cat::operator=(const Cat &cat)
{
	std::cout << "Cat operator called" << std::endl;
	*(this->brain) = *(cat.brain);
	this->type = cat.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "*Meow*" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (this->brain);
}