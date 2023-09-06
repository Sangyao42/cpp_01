/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 20:25:37 by sawang            #+#    #+#             */
/*   Updated: 2023/09/06 17:11:41 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

namespace replacer
{
	int	StrInFileReplace(const std::string infile, const std::string s1, const std::string s2)
	{
		std::ifstream		ifs(infile);
		std::string			content;
		size_t				pos;

		if (!ifs)
		{
			std::cerr << "Error: " << strerror(errno) << std::endl;
			return (EXIT_FAILURE);
		}
		if (s1.empty())
		{
			std::cerr << "Error: s1 is empty" << std::endl;
			ifs.close();
			return (EXIT_FAILURE);
		}
		if (s1 == s2)
		{
			std::cerr << "Error: s1 and s2 are the same" << std::endl;
			ifs.close();
			return (EXIT_FAILURE);
		}
		std::ofstream		ofs(infile + ".replace");
		if (!ofs)
		{
			std::cerr << "Error: " << strerror(errno) << std::endl;
			ifs.close();
			return (EXIT_FAILURE);
		}
		while (std::getline(ifs, content))
		{
			pos = 0;
			pos = content.find(s1, pos);
			//std::string::npos is a constant.
			// static const size_type npos = -1;
			// represents either
			// end of string indicator
			// or
			// error indicator by functions which return a string index
			while (pos != std::string::npos)
			{
				content.erase(pos, s1.length());
				content.insert(pos, s2);
				pos = content.find(s1, pos);
			}
			ofs << content;
			if (!ifs.eof())
				ofs << std::endl;
		}
		// If getline fails for any reason,
		//including file not open, file is empty, and file is corrupt and unreadable,
		// the stream's state will be marked bad and return false when checked by if().
		// reference
		// https://stackoverflow.com/questions/33356615/getline-is-returning-nothing-but-blank
		if (ifs.bad())
		{
			std::cerr << "Error: " << strerror(errno) << std::endl;
			ifs.close();
			ofs.close();
			if (!ofs)
				std::cerr << "Error: " << strerror(errno) << std::endl;
			return (EXIT_FAILURE);
		}
		ifs.close();
		ofs.close();
		// reference
		// https://stackoverflow.com/questions/28342660/error-handling-in-stdofstream-while-writing-data
		// https://cplusplus.com/reference/ios/ios/operator_not/
		// !ofs == true if either the failbit or the badbit is set.
		if (!ofs)
		{
			std::cerr << "Error: " << strerror(errno) << std::endl;
			return (EXIT_FAILURE);
		}
		return (EXIT_SUCCESS);
	}
};

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Error: Wrong number of arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	else
		return (replacer::StrInFileReplace(argv[1], argv[2], argv[3]));
}
