/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:34:31 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/15 16:22:34 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_HPP
# define PHONE_HPP

#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstring>
#include <string>

class Contact {
public:
	std::string nom;
	std::string numero;    
    Contact(std::string nom, std::string numero) : nom(nom), numero(numero) {
        std::cout << "Création du contact : " << nom << " avec le numéro " << numero << std::endl;
	}
};

class PhoneBook {
public:
	int contactActuel;
	Contact contacts[8];
	PhoneBook();
    void ajouterContact(const Contact nouveauContact){
		contacts[contactActuel] = nouveauContact;
		contactActuel = (contactActuel + 1) % 8; 
	}
};

#endif
