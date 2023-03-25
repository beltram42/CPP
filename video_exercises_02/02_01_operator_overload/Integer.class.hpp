/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:22:07 by alambert          #+#    #+#             */
/*   Updated: 2023/03/25 16:50:14 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_CLASS_H
# define INTEGER_CLASS_H

// Libraries ******************************* //
#include <iostream>
// ******************************* Libraries //



// Classes ********************************* //
class Sample {

public:

	Integer(int const n);
	~Integer(void);

	int		getValue(void) const;

	Integer & 	operator=(INteger const & rhs);
	Integer		operator+(Integer const & rhs) const;

private:

	int		_privateN;

};
// ********************************* Classes //



// Non Member ****************************** //
std::ostream &	operator<<(std::ostream & o, Integer const & rhs);
// ****************************** Non Member //



#endif // ****************** INTEGER_CLASS_H //