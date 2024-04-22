/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:59:35 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/08/24 14:59:36 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int	argc, char **argv)
{
	if(argc == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
	else
	{
		std::string input = "";
		std::string output = "";
		for (int i = 1; i < argc; i++){
			input += argv[i];
			if (i + 1 < argc)
				input += " ";
		}

		for (std::string::size_type i = 0; i < input.length(); i++){
			output += static_cast<char>(std::toupper(input[i]));
		}
		std::cout << output << std::endl;
	}
}
