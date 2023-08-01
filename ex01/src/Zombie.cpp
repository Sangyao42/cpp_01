/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 23:43:44 by sawang            #+#    #+#             */
/*   Updated: 2023/08/01 23:43:44 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie() : _name("zombie default")
{
	std::cout << this->_name << " is created." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " is destroyed." << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
