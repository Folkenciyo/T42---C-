/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 16:51:57 by juguerre          #+#    #+#             */
/*   Updated: 2024/06/16 16:51:57 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

class Contact{
	private:
		static std::string	_fields_name[5];
		std::string			_informations[11];

		enum Field {
			FirstName = 0,
			LastName,
			NickName,
			PhoneNumber,
			DarkestSecret
		};
	public:
		Contact(void);
		~Contact(void);

		bool	set_contact();
		void	get_contact(int index)const;
};

#endif