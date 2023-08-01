/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 22:17:19 by sawang            #+#    #+#             */
/*   Updated: 2023/08/01 22:17:19 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie = myZombie::newZombie("Bob");
	zombie->announce();
	delete zombie;
	myZombie::randomChump("Jim");

	return (0);
}
