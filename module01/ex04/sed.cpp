/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 08:26:25 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/16 10:55:00 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

Sed::Sed() {};

Sed::~Sed() {};

int	Sed::printError(std::string str)
{
	std::cout << str << std::endl;
	return (1);
}

int	Sed::replace(std::string const filename, std::string const s1, std::string const s2)
{
	std::ifstream	in_file;
	std::ofstream	out_file;
	std::string		line;
	size_t			pos;
	
	if (filename.empty() || s1.empty() || s2.empty())
		return(Sed::printError("Error: one of the args is an empty string"));
	in_file.open(filename.c_str(), std::ifstream::in);
	if (!in_file.is_open())
		return(Sed::printError("Error: not able to open infile"));
	out_file.open((filename + ".replace").c_str(),  std::ofstream::out | std::ofstream::trunc);
	if (!out_file.is_open())
		return(Sed::printError("Error:  not able to open outfile"));
	while (std::getline(in_file, line))
	{
		pos = line.find(s1);
		if (pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
		}
		out_file << line;
		if (!in_file.eof())
			out_file << std::endl;
	}
	in_file.close();
	out_file.close();
	return (0);
}

