/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:05:29 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/22 14:19:07 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include "phone.hpp"

class Contact {
private:
	std::string _name;
	std::string _lastname;
	std::string _nickname;
	std::string _number;
	std::string _darkest_secret;
public:
	Contact();
	~Contact();
	void PrintContact();
	void PrintContactFull();
	void SetFirstName(std::string str);
	void SetLastName(std::string str);
	void SetNickname(std::string str);
	void SetNumber(std::string str);
	void SetSecret(std::string str);
	int	Empty();
	std::string TruncateField(const std::string& field);
	std::string Get(std::string string);
};

#endif
