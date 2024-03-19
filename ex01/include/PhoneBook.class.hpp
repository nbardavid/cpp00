/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:59:53 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/19 20:07:43 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include"phone.hpp"

class PhoneBook {
private:
	int contactActuel;
	Contact contacts[8];
public:
	PhoneBook();
	~PhoneBook();
    void ajouterContact(const Contact nouveauContact);
    void Add();
	void Search();
	Contact *GetContacts();
};
#endif
