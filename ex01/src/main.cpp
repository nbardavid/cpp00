/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:33:36 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/19 19:55:28 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phone.hpp"

int main(void){
	PhoneBook book;
	std::string input;

	while(1)
	{
		std::getline(std::cin, input);
		if (input == "ADD")
			book.Add();
		else if (input == "SEARCH")
			book.Search();
		else if (input == "EXIT")
			break;
	}
	return(0);
}
