/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 14:54:37 by alambert          #+#    #+#             */
/*   Updated: 2023/04/23 15:25:40 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
T	max(T const & x, T const & y)	{
	return (x >= y ? x : y);
}

int	foo(int x)	{
	std::cout << "Long computing time..." << std::endl;
	return x;
}

int	main(void)	{
	int		a = 21;
	int		b = 42;
	float	c = -1.7f;
	float	d = 4.2f;
	char	e = 'a';
	char	f = 'z';

	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max<int>(a, b) << std::endl;	// Explicit instanciation
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max(a, b) << std::endl;	// Implicit instanciation

	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << max<float>(c, d) << std::endl;	// Explicit instanciation
	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << max(c, d) << std::endl;	// Implicit instanciation

	std::cout << "Max of " << e << " and " << f << " is ";
	std::cout << max<char>(e, f) << std::endl;	// Explicit instanciation
	std::cout << "Max of " << e << " and " << f << " is ";
	std::cout << max(e, f) << std::endl;	// Implicit instanciation

	/* No issue here */
	int		ret = max<int>(foo(a), foo(b));		//Explicit instantiation
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << ret << std::endl;	// Implicit instanciation

	return (0);
}