/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:22:18 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/24 11:54:41 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Materia created" << std::endl;
	this->_type = "Unknown type";
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "Materia created" << std::endl;
	this->_type = type;
}

AMateria::AMateria(const AMateria &materia)
{
	std::cout << "Materia copy created" << std::endl;
	this->_type = materia._type;
}

AMateria &AMateria::operator=(const AMateria &materia)
{
	std::cout << "Materia operator called" << std::endl;
	this->_type = materia._type;
}

AMateria::~AMateria()
{
	std::cout << "Materia destroyed" << std::endl;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}