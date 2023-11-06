/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:24:54 by asolano-          #+#    #+#             */
/*   Updated: 2023/11/06 11:31:39 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria	*materia[4];
		int			_equipedMateria;
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &src);
		virtual ~MateriaSource(void);
		MateriaSource	&operator=(const MateriaSource &src);

		void learnMateria(AMateria *materia);
		AMateria* createMateria(std::string const & type);
};

#endif