/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:34:31 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/19 14:53:45 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_HPP
# define PHONE_HPP

#include <algorithm>
#include <cctype>
#include <cstring>
#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>

class Contact {
private:
	std::string name;
	std::string lastname;
	std::string nickname;
	std::string number;
	std::string darkest_secret;
public:
	Contact();
	~Contact();
	void PrintContact();
	void SetFirstName(std::string str);
	void SetLastName(std::string str);
	void SetNickname(std::string str);
	void SetNumber(std::string str);
	void SetSecret(std::string str);
	std::string Get(std::string string);
};

class PhoneBook {
private:
	int contactActuel;
	Contact contacts[8];
public:
	PhoneBook();
	~PhoneBook();
    void ajouterContact(const Contact nouveauContact);
    void Add();
	Contact *GetContacts();
};

#endif
