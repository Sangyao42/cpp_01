/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 23:40:52 by sawang            #+#    #+#             */
/*   Updated: 2023/08/01 23:40:52 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();

		void	announce(void) const;
		void	setName(std::string name);
	private:
		std::string _name;
};

namespace myZombie
{
	Zombie* zombieHorde(int N, std::string name);
};

#endif
