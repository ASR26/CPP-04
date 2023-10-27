/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:24:54 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/26 10:45:29 by asolano-         ###   ########.fr       */
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
		bool	_iceLearned;
		bool	_cureLearned;

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &materiasource);
		virtual ~MateriaSource(void);
		MateriaSource	&operator=(const MateriaSource &materiasource);

		void learnMateria(AMateria *materia);
		AMateria* createMateria(std::string const & type);
};

#endif