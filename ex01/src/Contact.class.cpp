/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 09:50:38 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/22 14:17:44 by nbardavi         ###   ########.fr       */
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
	std::cout << "FirstName: " << this->_name << std::endl;
	std::cout << "LastName: " << this->_lastname << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone Number: " << this->_number << std::endl;
	std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
}

void Contact::PrintContact() {
    std::stringstream ss;

    ss << std::right << std::setw(10) << TruncateField(this->_name);
    std::cout << ss.str() << "|";
    ss.str("");
    ss.clear();
    ss << std::right << std::setw(10) << TruncateField(this->_lastname);
    std::cout << ss.str() << "|";
    ss.str("");
    ss.clear();
    ss << std::right << std::setw(10) << TruncateField(this->_nickname);
    std::cout << ss.str() << "|";
    ss.str("");
    ss.clear();
    ss << std::right << std::setw(10) << TruncateField(this->_number);
    std::cout << ss.str() << "|";
    ss.str("");
    ss.clear();
    ss << std::right << std::setw(10) << TruncateField(this->_darkest_secret);
    std::cout << ss.str() << "|";
    ss.str("");
    ss.clear();
    std::cout << std::endl;
}

void Contact::SetFirstName(std::string str){
	this->_name = str;
}

void Contact::SetLastName(std::string str){
	this->_lastname = str;
}

void Contact::SetNumber(std::string str){
	this->_number = str;
}

void Contact::SetNickname(std::string str){
	this->_nickname = str;
}

void Contact::SetSecret(std::string str){
	this->_darkest_secret = str;
}

int Contact::Empty(){
	return(this->_name.empty());
}

std::string Contact::Get(std::string string){
	if (string == "firstname")
		return (this->_name);
	if (string == "_lastname")
		return (this->_lastname);
	if (string == "_nickname")
		return (this->_nickname);
	if (string == "_number")
		return (this->_number);
	if (string == "secret")
		return (this->_darkest_secret);
	return (NULL);
}
