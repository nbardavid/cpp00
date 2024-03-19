/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 09:46:47 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/19 14:53:30 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phone.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::ajouterContact(const Contact nouveauContact){
	contacts[contactActuel] = nouveauContact;
	contactActuel = (contactActuel + 1) % 8; 
}

void PhoneBook::Add(){
	Contact NewContact;
	std::string string;

	std::cout << "First name of Contact : ";
	std::cin >> string;
	NewContact.SetFirstName(string);
	std::cout << "Last name of Contact : ";
	std::cin >> string;
	NewContact.SetLastName(string);
	std::cout << "Nickname of Contact : ";
	std::cin >> string;
	NewContact.SetNickname(string);
	std::cout << "Phone number : ";
	std::cin >> string;
	NewContact.SetNumber(string);
	std::cout << "Darkest Secret : ";
	std::cin >> string;
	NewContact.SetSecret(string);
	this->ajouterContact(NewContact);
}

Contact *PhoneBook::GetContacts(){
	return (this->contacts);
}

