/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:33:36 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/15 16:18:44 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phone.hpp"

PhoneBook init_book(void){
	PhoneBook book;

	book.contactActuel = 0;
	return (book);
}

void add_cmd(PhoneBook book){
	std::string name;
	std::string num;

	std::cout << "Name of Contact";
	std::cin >> name;
	std::cout << "Phone number";
	std::cin >> num;
	book.contacts[book.contactActuel].nom = name;
	book.contacts[book.contactActuel].numero = num;
}

int main(int argc, char **argv){
	PhoneBook book = init_book();
	std::string input;

	(void)argc;
	(void)argv;
	std::cin >> input;
	if (input == "ADD")
		std::cout << input;
	return(0);
}
