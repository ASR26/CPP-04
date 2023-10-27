/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:32:09 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/27 10:17:38 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Character: public ICharacter
{
	private:
		std::string _name;
		AMateria	*_inventory[4];
		int			_equipedMateria;
		AMateria	*_unequiped[1];
	public:
		Character();
		Character(std::string name);
		Character (const Character &character);
		virtual ~Character();
		Character &operator=(const Character &character);

		std::string const &getName() const;
		void equip(AMateria* materia);
		void unequip(int index);
		void use(int index, ICharacter& target);
		void discard(AMateria *materia);
};

#endif