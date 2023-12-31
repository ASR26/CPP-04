/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:32:09 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/27 10:30:06 by asolano-         ###   ########.fr       */
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
		static int size;
		static AMateria	**_unequiped; // save unequiped materia here to delete it later (static to share it between every character)
};

#endif