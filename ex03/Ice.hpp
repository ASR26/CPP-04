/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:09:43 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/26 10:45:52 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria
{
	public:
		Ice(void);
		Ice(std::string type);
		Ice(const Ice &ice);
		~Ice(void);
		Ice	&operator=(const Ice &ice);

		virtual AMateria	*clone(void) const;
		void 		use(ICharacter& target);
};

#endif