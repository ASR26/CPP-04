/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:25:43 by asolano-          #+#    #+#             */
/*   Updated: 2023/11/07 10:15:35 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Materia Source created" << std::endl;
	int i = -1;
	while (++i < 4)
		this->materia[i] = NULL;
	this->_equipedMateria = 0;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	std::cout << "Materia source copy created" << std::endl;
	for (int i = 0; i < 4; i++)
		this->materia[i] = src.materia[i]->clone();
}

MateriaSource::~MateriaSource()
{
	std::cout << "Materia Source destroyed" << std::endl;
	int	i = -1;

	while (++i < 4)
		if (this->materia[i])
			delete this->materia[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
	std::cout << "Character operator called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] != NULL)
			delete this->materia[i];
		if (src.materia[i])
			this->materia[i] = src.materia[i]->clone();
	}
	this->_equipedMateria = src._equipedMateria;
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (_equipedMateria < 4)
	{
		this->materia[_equipedMateria] = materia->clone();
		this->_equipedMateria++;
	}
	delete materia;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	int i = -1;
	while (++i < this->_equipedMateria)
	{
		if (this->materia[i]->getType() == type)
			return (this->materia[i]->clone());
	}
	return (NULL);
}