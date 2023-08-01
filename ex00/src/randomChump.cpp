/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randowChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:03:02 by sawang            #+#    #+#             */
/*   Updated: 2023/08/01 19:03:02 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

void myZombie::randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}
