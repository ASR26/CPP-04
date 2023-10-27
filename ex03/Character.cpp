/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:33:34 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/26 10:57:00 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

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
		this->_inventory[i] = character._inventory[i];
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
		this->_inventory[i] = character._inventory[i];
	this->_equipedMateria = character._equipedMateria;
	return *this;
}

std::string	const &Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria* m)
{
	if (this->_equipedMateria < 4)
	{
		this->_inventory[_equipedMateria] = m;
		this->_equipedMateria++;
		std::cout << "Materia " << m->getType() << " equiped in slot " << _equipedMateria << std::endl;
	}
	else
		std::cout << "Inventory full, cannot equip this materia" << std::endl;
}

void Character::unequip(int index)
{
	this->_inventory[index] = NULL;
}

void Character::use(int index, ICharacter& target)
{
	if (this->_inventory[index])
		this->_inventory[index]->use(target);
	else
		std::cout << "No materia equiped in slot " << index << std::endl;
}