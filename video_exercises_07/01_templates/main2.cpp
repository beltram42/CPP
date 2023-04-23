/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 15:27:09 by alambert          #+#    #+#             */
/*   Updated: 2023/04/23 15:41:05 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
class List	{
public:
	List<T>(T const & constent)	{
		// Bla bla bla
	}

	List<T>(List<T> const & list)	{
		// Bla bla bla
	}

	~List<T>(void)	{
		// Bla bla bla
	}

	// Etc

private:
	T *			_content;
	List<T> *	_next;
};



int	main(void)	{
	List<int>		a(42);
	List<float>		b(3.1415f);
	List<List<int>>	c(a);

	// etc
	return (0);
}


