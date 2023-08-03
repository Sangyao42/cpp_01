/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 20:25:37 by sawang            #+#    #+#             */
/*   Updated: 2023/08/03 20:01:55 by sawang           ###   ########.fr       */
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

		if (!ifs.good())
		{
			std::cerr << "Error: " << strerror(errno) << std::endl;
			return (EXIT_FAILURE);
		}
		if (s1 == s2)
		{
			std::cerr << "Error: s1 and s2 are the same" << std::endl;
			return (EXIT_FAILURE);
		}
		std::getline(ifs, content, '\0');
		if (ifs.eof())
		{
			pos = 0;
			pos = content.find(s1, pos);
			while (pos != std::string::npos)
			{
				content.erase(pos, s1.length());
				content.insert(pos, s2);
				pos = content.find(s1, pos);
			}
			std::ofstream		ofs(infile + ".replace");
			if (!ofs.good())
			{
				std::cerr << "Error: " << strerror(errno) << std::endl;
				ifs.close();
				return (EXIT_FAILURE);
			}
			else
			{
				ofs << content;
				ifs.close();
				ofs.close();
				return (EXIT_SUCCESS);
			}
		}
		else
		{
			std::cerr << "Error: " << strerror(errno) << std::endl;
			ifs.close();
			return (EXIT_FAILURE);
		}
	}
};

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Error: Wrong number of arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	else if (replacer::StrInFileReplace(argv[1], argv[2], argv[3]))
		return (EXIT_FAILURE);
	else
		return (EXIT_SUCCESS);
}
