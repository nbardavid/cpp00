/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 09:50:38 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/19 14:27:53 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phone.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::PrintContact()
{
	std::stringstream ss;
	std::string string;

	ss << std::right << std::setw(10) << this->name;
	std::cout << ss.str() << "|";
	ss << std::right << std::setw(10) << this->lastname;
	std::cout << ss.str() << "|";
}

void Contact::SetFirstName(std::string str){
	this->name = str;
}

void Contact::SetLastName(std::string str){
	this->lastname = str;
}

void Contact::SetNumber(std::string str){
	this->number = str;
}

void Contact::SetNickname(std::string str){
	this->nickname = str;
}

void Contact::SetSecret(std::string str){
	this->darkest_secret = str;
}

std::string Contact::Get(std::string string){
	if (string == "firstname")
		return (this->name);
	if (string == "lastname")
		return (this->lastname);
	if (string == "nickname")
		return (this->nickname);
	if (string == "number")
		return (this->number);
	if (string == "secret")
		return (this->darkest_secret);
}
