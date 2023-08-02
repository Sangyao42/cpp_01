/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:39:29 by sawang            #+#    #+#             */
/*   Updated: 2023/08/02 17:20:22 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB() {};

HumanB::HumanB(std::string name) : _name(name) {};

HumanB::~HumanB() {};

void	HumanB::attack() const
{
	std::string type = this->_weapon->getType();
	if (type.empty())
		std::cout << this->_name << " attacks with his bare hands" << std::endl;
	else
		std::cout << this->_name << " attacks with his " << type << std::endl;
}

void	HumanB::setWeapon(const Weapon &weapon)
{
	this->_weapon = const_cast<Weapon*>(&weapon);
}
