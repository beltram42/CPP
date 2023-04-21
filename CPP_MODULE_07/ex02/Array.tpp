/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/04/21 11:44:02 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Array.hpp"

// Constructor Destructor *************************************************** //
template <typename T> Array<T>::Array() : 	_privateSize(0), _privateArray(new T[0])	{
	std::cout << "template <typename T> Array: default constructor called for: " << _privateArray << " , of size: " << _privateSize << std::endl;
}

template <typename T> Array<T>::Array(unsigned int n) : _privateSize(n), _privateArray(new T[_privateSize])	{
	std::cout << "template <typename T> Array(unsigned int): constructor called for: " << _privateArray << " , of size: " << _privateSize << std::endl;
}

template <typename T> Array<T>::Array(Array const & toCopy) : _privateSize(toCopy.size()), _privateArray(new T[_privateSize])	{
	for (unsigned int i = 0; i < _privateSize; i++)	{
		_privateArray[i] = toCopy._privateArray[i];
	}
	std::cout << "template <typename T> Array: constructor by copy called for: " << _privateArray << " , of size: " << _privateSize << std::endl;
}

template <typename T> Array<T>::~Array()	{
	std::cout << "template <typename T> Array: destructor called for: " << _privateArray << " , of size: " << _privateSize << std::endl;
	delete[] _privateArray;
}
// *************************************************** Constructor Destructor //


// Member functions ********************************************************* //

// -- Operators overload ---------------------------------------------------- //
template <typename T> Array<T> const	& Array<T>::operator=(Array const & toCopy)	{
	if (this != & toCopy)	{
		if (this->_privateArray)
			delete [] this->_privateArray;
		this->_privateSize = toCopy.size();
		this->_privateArray = new T[this->size()];
		for (int i = 0; i < this->size(); i++)
			this->_privateArray[i] = toCopy._privateArray[i];
	}
	return (*this);
}

template <typename T> T	& 				Array<T>::operator[](unsigned int n) {
	if (n >= this->size() || n < 0)
		throw(Array::invalidIndex());
	return (this->_privateArray[n]);
}
// ---------------------------------------------------- Operators overload -- //

// -- Functions overload ---------------------------------------------------- //
template <typename T> unsigned int		Array<T>::size() const {
	return (this->_privateSize);
}
// ---------------------------------------------------- Functions overload -- //

// -- Accessors ------------------------------------------------------------- //
template<typename T> T const *			Array<T>::getArray() const	{
	return (this->_privateArray);
}
// ------------------------------------------------------------- Accessors -- //


// -- Exceptions ------------------------------------------------------------ //
template<typename T> const char *		Array<T>::invalidIndex::what() const throw()	{
	return ("Invalid Index");
}
// ------------------------------------------------------------ Exceptions -- //


// ********************************************************* Member functions //


// Non Member functions ***************************************************** //
template<typename T> std::ostream	&operator<<(std::ostream & out, Array<T> const & rhs)	{
	out << std::endl;
	out << "*****************************************************************" << CLEAR << std::endl;
	out << std::endl;

	out << "> ";
	for (unsigned int i = 0; i < rhs.size(); i++)	{
		out << rhs.getArray()[i];
		if (i < rhs.size() - 1)
			out << " | ";
	}
	out << " < ";

	out << std::endl;
	out << "*****************************************************************" << CLEAR << std::endl;
	out << std::endl;

	return (out);
}
