/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:33:36 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/19 14:57:02 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phone.hpp"

PhoneBook init_book(void){
	PhoneBook book;

	book.contactActuel = 0;
	return (book);
}

int main(int argc, char **argv){
	PhoneBook book = init_book();
	std::string input;

	(void)argc;
	(void)argv;
	while(1)
	{
		std::getline(std::cin, input);
		if (input == "ADD")
			book.Add();
		else if (input == "SEARCH")
			book.Search();
		std::cout << "\n";
	}
	return(0);
}
