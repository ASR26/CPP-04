/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:09:04 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/26 10:11:36 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
	std::cout << "Ice materia created" << std::endl;
}

Ice::Ice(std::string type)
{
	std::cout << "Ice materia with type " << type << " created"<< std::endl;
	this->_type = type;
}

Ice::Ice(const Ice &ice)
{
	std::cout << "Ice copy created" << std::endl;
	this->_type = ice.getType();
}

Ice &Ice::operator=(const Ice &ice)
{
	this->_type = ice.getType();
	return *this;
}

AMateria *Ice::clone() const
{
	std::cout << "Ice materia cloned" << std::endl;
	return (new Ice(*this));
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "'s wounds *" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destroyed" << std::endl;
}