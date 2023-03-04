/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:29:02 by alambert          #+#    #+#             */
/*   Updated: 2023/03/04 19:54:32 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class	Contact {

public:
	Contact(void);
	~Contact(void);
	std::string getContact(int info);
    void	setContact(std::string info, int id);

private:
    std::string _FirstName;
    std::string _LastName;
    std::string _Nickname;
    std::string _PhoneNumber;
    std::string _DarkestSecret;
	
};

#endif // **************************** CONTACT_CLASS_H //