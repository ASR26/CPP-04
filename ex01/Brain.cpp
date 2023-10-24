/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 08:56:23 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/24 10:53:54 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created" << std::endl;
	int	i = 0;
	while (i < 100)
	{
		if (i % 3 == 0)
			this->ideas[i] = "Food";
		else if (i % 3 == 1)
			this->ideas[i] = "Walk";
		else if (i % 3 == 2)
			this->ideas[i] = "Sleep";
		i++;
	}
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Brain copy constructor" << std::endl;
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = brain.ideas[i];
		i++;
	}
}

Brain &Brain::operator=(const Brain &brain)
{
	std::cout << "Brain operator called" << std::endl;
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = brain.ideas[i];
		i++;
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}

std::string Brain::getIdeas(int i)
{
	return this->ideas[i];
}