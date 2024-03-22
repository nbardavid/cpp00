/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 09:46:47 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/22 14:16:28 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phone.hpp"
#include <sstream>

PhoneBook::PhoneBook()
{
	this->contactActuel = 0;
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

	std::cout << "First _name of Contact : ";
	std::getline(std::cin, string);
	NewContact.SetFirstName(string);
	std::cout << "Last _name of Contact : ";
	std::getline(std::cin, string);
	NewContact.SetLastName(string);
	std::cout << "Nickname of Contact : ";
	std::getline(std::cin, string);
	NewContact.SetNickname(string);
	std::cout << "Phone _number : ";
	std::getline(std::cin, string);
	NewContact.SetNumber(string);
	std::cout << "Darkest Secret : ";
	std::getline(std::cin, string);
	NewContact.SetSecret(string);
	this->ajouterContact(NewContact);
}

void PhoneBook::Search(){
	int i = 0;
	std::string input;
    
    std::cout << "First Name" << "|";
    std::cout << " Last Name" << "|";
    std::cout << "  Nickname" << "|";
    std::cout << "Phone Num." << "|";
    std::cout << "    Secret" << "|";
    std::cout << std::endl;
	
	while(this->contacts[i].Empty() == false && i < 8)
	{
		this->contacts[i].PrintContact();
		i++;
	}
	std::cout << "Index of Contact to show: ";
	std::cin >> input;
	std::cout<< std::endl;
	
	std::stringstream iss(input);
	char extra;
	if (!(iss >> i && !(iss >> extra)))
		std::cerr << "Wrong argmument : Only numbers (int range) are accepted" << std::endl;
	if (this->contacts[i].Empty() == true || i > 7)
		std::cout << "There is no contact _number " << i << std::endl;
	else
		this->contacts[i].PrintContactFull();
}

Contact *PhoneBook::GetContacts(){
	return (this->contacts);
}
