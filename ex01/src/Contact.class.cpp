/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 09:50:38 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/19 17:28:45 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phone.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::TruncateField(const std::string& field) {
    if (field.length() > 10) {
        return field.substr(0, 9) + ".";
    } else {
        return field;
    }
}

void Contact::PrintContactFull() {
	std::cout << "FirstName: " << this->name << std::endl;
	std::cout << "LastName: " << this->lastname << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone Number: " << this->number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}

void Contact::PrintContact() {
    std::stringstream ss;

    ss << std::right << std::setw(10) << TruncateField(this->name);
    std::cout << ss.str() << "|";
    ss.str("");
    ss.clear();
    ss << std::right << std::setw(10) << TruncateField(this->lastname);
    std::cout << ss.str() << "|";
    ss.str("");
    ss.clear();
    ss << std::right << std::setw(10) << TruncateField(this->nickname);
    std::cout << ss.str() << "|";
    ss.str("");
    ss.clear();
    ss << std::right << std::setw(10) << TruncateField(this->number);
    std::cout << ss.str() << "|";
    ss.str("");
    ss.clear();
    ss << std::right << std::setw(10) << TruncateField(this->darkest_secret);
    std::cout << ss.str() << "|";
    ss.str("");
    ss.clear();
    std::cout << std::endl;
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

int Contact::Empty(){
	return(this->name.empty());
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
	return (NULL);
}
