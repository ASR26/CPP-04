/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:39:53 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/20 11:25:37 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat created" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat destroyed" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	std::cout << "Cat copy constructor" << std::endl;
	this->type = cat.type;
}

Cat &Cat::operator=(const Cat &cat)
{
	std::cout << "Cat operator called" << std::endl;
	this->type = cat.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "*Meow*" << std::endl;
}