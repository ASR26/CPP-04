/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:39:53 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/20 11:58:18 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Wrong Cat created" << std::endl;
	this->type = "Wrong Cat";
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong Cat destroyed" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat)
{
	std::cout << "Wrong Cat copy constructor" << std::endl;
	this->type = cat.type;
}

WrongCat &WrongCat::operator=(const WrongCat &cat)
{
	std::cout << "Wrong Cat operator called" << std::endl;
	this->type = cat.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "*Wrong Meow*" << std::endl;
}