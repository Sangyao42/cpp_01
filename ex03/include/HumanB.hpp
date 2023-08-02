/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:29:57 by sawang            #+#    #+#             */
/*   Updated: 2023/08/02 18:00:21 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();

		void attack() const;
		void setWeapon(Weapon const &weapon);
	private:
		Weapon *_weapon;
		std::string _name;
};

#endif
