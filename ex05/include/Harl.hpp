/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 20:05:29 by sawang            #+#    #+#             */
/*   Updated: 2023/08/03 21:29:05 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



class Harl
{
	public:
		Harl();
		~Harl();

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

		void complain(std::string level);
	private:

};

typedef void (Harl::*HarlMemFn)(void);

#define CALL_MEMBER_FN(object,ptrToMember) ((object).*(ptrToMember))
