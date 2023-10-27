/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:45:35 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/26 10:10:23 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure(void);
		Cure(std::string type);
		Cure(const Cure &cure);
		~Cure(void);
		Cure	&operator=(const Cure &cure);

		virtual AMateria	*clone(void) const;
		void 		use(ICharacter& target);
};

#endif