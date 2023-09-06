/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 20:05:29 by sawang            #+#    #+#             */
/*   Updated: 2023/09/04 16:44:02 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	public:
		Harl();
		~Harl();

		void complain(std::string level);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

// how to use pointers to member functions
//https://isocpp.org/wiki/faq/pointers-to-members

typedef void (Harl::*HarlMemFn)(void);

# define CALL_MEMBER_FN(object,ptrToMember) ((object).*(ptrToMember))

#endif

