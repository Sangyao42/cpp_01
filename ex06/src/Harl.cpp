/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 21:40:08 by sawang            #+#    #+#             */
/*   Updated: 2023/08/03 21:40:12 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl() {};

Harl::~Harl() {};

void Harl::debug(void)
{
	std::cout << "[Debug]: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
};

void Harl::info(void)
{
	std::cout << "[Info]: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
};

void Harl::warning(void)
{
	std::cout << "[Warning]: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
};

void Harl::error(void)
{
	std::cout << "[Error]: This is unacceptable! I want to speak to the manager now." << std::endl;
};

void Harl::complain(std::string level)
{
	int	memFnNum;

	std::string levelArray[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	HarlMemFn array[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (level == levelArray[i])
		{
			memFnNum = i;
			CALL_MEMBER_FN(*this, array[memFnNum])();
			break ;
		}
	}
};
