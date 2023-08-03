/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 21:40:27 by sawang            #+#    #+#             */
/*   Updated: 2023/08/03 22:04:10 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

enum e_level
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

int	main(int argc, char *argv[])
{
	Harl	harl;
	int		i;

	if (argc != 2)
	{
		std::cout << "Usage: ./harlFilter [DEBUG, INFO, WARNING, ERROR]" << std::endl;
		return (EXIT_FAILURE);
	}

	std::string level = argv[1];
	std::string levelArray[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (i = 0; i < 4; i++)
	{
		if (level == levelArray[i])
			break ;
	}
	switch (i)
	{
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (EXIT_SUCCESS);
}
