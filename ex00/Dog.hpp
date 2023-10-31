/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 08:50:44 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/31 08:31:54 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CPP
# define DOG_CPP

#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog &dog);
		Dog &operator=(const Dog &dog);
		~Dog();
		virtual void	makeSound() const;
};

# endif