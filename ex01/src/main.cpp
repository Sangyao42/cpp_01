/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 23:43:08 by sawang            #+#    #+#             */
/*   Updated: 2023/08/01 23:43:08 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

int main(void)
{
	Zombie *zombie = myZombie::zombieHorde(5, "Bob");
	for (int i = 0; i < 5; i++)
		zombie[i].announce();
	delete [] zombie;

	return (0);
}


