/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:33:34 by asolano-          #+#    #+#             */
/*   Updated: 2023/11/06 12:01:48 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int	Character::size = 0;
AMateria **Character::_unequiped = NULL;

Character::Character()
{
	std::cout << "Character created" << std::endl;
	this->_name = "";
	this->_equipedMateria = 0;
}

Character::Character(std::string name)
{
	std::cout << "Character " << name << " created" << std::endl;
	this->_name = name;
	this->_equipedMateria = 0;
}

Character::Character(const Character &character)
{
	std::cout << "Character copied" << std::endl;
	this->_name = character.getName();
	for (int i = 0; i < this->_equipedMateria; i++)
		this->_inventory[i] = character._inventory[i]->clone();
	this->_equipedMateria = character._equipedMateria;
}

Character::~Character()
{
	std::cout << "Character destroyed" << std::endl;
	for (int i = 0; i < _equipedMateria; i++)
		delete this->_inventory[i];
}

Character &Character::operator=(const Character &character)
{
	std::cout << "Character operator called" << std::endl;
	this->_name = character.getName();
	for (int i = 0; i < this->_equipedMateria; i++)
		this->_inventory[i] = character._inventory[i]->clone();
	this->_equipedMateria = character._equipedMateria;
	return *this;
}

std::string	const &Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria* m)
{
	int	i = -1;
	if (this->_equipedMateria <= 4)
	{
		while (++i < 4)
		{
			if (this->_inventory[i] == NULL)
			{
				this->_inventory[i] = m;
				this->_equipedMateria++;
				break;
			}
		}
		std::cout << "Materia " << m->getType() << " equiped in slot " << i << std::endl; // fallo aqui
	}
	else
	{
		discard(m);
		std::cout << "Inventory full, cannot equip this materia" << std::endl;
	}
}

void Character::unequip(int index)
{
	if (index < 0 || index > 3)
		std::cout << "Not a valid index" << std::endl;
	else if (this->_inventory[index] == NULL)
		std::cout << "This slot is already empty" << std::endl;
	else
	{
		discard(this->_inventory[index]);
		this->_inventory[index] = NULL;
		this->_equipedMateria--;
	}
}

void Character::use(int index, ICharacter& target)
{
	if (index < 0 || index > 3)
		std::cout << "Not a valid index" << std::endl;
	else
	{
		if (this->_inventory[index])
			this->_inventory[index]->use(target);
		else
			std::cout << "No materia equiped in slot " << index << std::endl;
	}
}

void Character::discard(AMateria *materia)
{
	size++;
	int i = 0;
	AMateria** newMat = new AMateria*[size];
	while (i < size - 1)
	{
		newMat[i] = _unequiped[i];
		i++;
	}
	newMat[i] = materia;
	if (_unequiped != NULL)
		delete[] _unequiped;
	_unequiped = newMat;
}