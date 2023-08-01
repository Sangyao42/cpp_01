/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:49:03 by sawang            #+#    #+#             */
/*   Updated: 2023/08/01 18:49:03 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();

		void	announce(void) const;
	private:
		std::string _name;
};

namespace myZombie
{
	Zombie* newZombie(std::string name);
	void randomChump(std::string name);
};

#endif
