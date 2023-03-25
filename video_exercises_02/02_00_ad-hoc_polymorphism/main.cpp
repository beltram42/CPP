/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 10:53:17 by alambert          #+#    #+#             */
/*   Updated: 2023/03/25 14:39:12 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int	main(void)	{
	Sample inst0;

	Sample inst1;

	const Sample& ref = inst1;

	//Sample&	i2;

	inst0.bar('a');
	inst0.bar(42);
	inst0.bar(3.14f);
	inst0.bar(ref);
	return (0);
}