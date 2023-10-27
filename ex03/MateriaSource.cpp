/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:25:43 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/26 10:37:31 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Materia Source created" << std::endl;
	this->_iceLearned = false;
	this->_cureLearned = false;
}

MateriaSource::MateriaSource(const MateriaSource &materiasource)
{
	std::cout << "Materia source copy created" << std::endl;
	this->_iceLearned = materiasource._iceLearned;
	this->_cureLearned = materiasource._cureLearned;
}

MateriaSource::~MateriaSource()
{
	std::cout << "Materia Source destroyed" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiasource)
{
	this->_cureLearned = materiasource._cureLearned;
	this->_iceLearned = materiasource._iceLearned;
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (materia->getType() == "cure")
		this->_cureLearned = true;
	else if (materia->getType() == "ice")
		this->_iceLearned = true;
	delete materia;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	if (type == "ice" && this->_iceLearned == true)
		return (new Ice());
	else if (type == "cure" && this->_cureLearned == true)
		return (new Cure());
	else
		return 0;
}