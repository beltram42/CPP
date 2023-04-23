/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vertex.class.tpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 15:45:44 by alambert          #+#    #+#             */
/*   Updated: 2023/04/23 15:57:04 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template <typename T = float> // float est ici le type par defaut => si le type n'est pas specifie, le compilo utilsera les float 
class Vertex	{
public:
	Vertex(T const & x, T const & y, T const & z) : _x(x), _y(y), _z(z)	{};
	~Vertex(void)	{};
	T const &	getX(void) const	{return this->_x};
	T const &	getY(void) const	{return this->_y};
	T const &	getZ(void) const	{return this->_z};

	// Etc

private:
	T const		_x;
	T const		_y;
	T const		_z;

	Vertex(void);
}

template <typename T>
std::ostream & operator<<(std::ostream & out, Vertex<T> const & rhs)	{
	
}