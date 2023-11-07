/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 08:50:44 by asolano-          #+#    #+#             */
/*   Updated: 2023/11/07 10:16:20 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CPP
# define DOG_CPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain* brain;
	public:
		Dog();
		Dog(const Dog &dog);
		Dog &operator=(const Dog &dog);
		~Dog();
		void	makeSound() const;
		Brain* getBrain() const;
};

# endif