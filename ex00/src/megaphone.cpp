/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:33:36 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/15 15:06:01 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstring>
#include <string>

int main(int argc, char **argv){
	if (argc > 1)
		for (int i = 1; i < argc; i++)
		{
			std::transform(argv[i], argv[i] + std::strlen(argv[i]), argv[i], toupper);
			std::cout << (argv[i]);
		}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return(0);
}
