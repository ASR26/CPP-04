/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:45:40 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/26 10:08:21 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->_type = "cure";
	std::cout << "Cure materia created" << std::endl;
}

Cure::Cure(std::string type)
{
	std::cout << "Cure materia with type " << type << " created"<< std::endl;
	this->_type = type;
}

Cure::Cure(const Cure &cure)
{
	std::cout << "Cure copy created" << std::endl;
	this->_type = cure.getType();
}

Cure &Cure::operator=(const Cure &cure)
{
	this->_type = cure.getType();
	return *this;
}

AMateria *Cure::clone() const
{
	std::cout << "Cure materia cloned" << std::endl;
	return (new Cure(*this));
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure destroyed" << std::endl;
}