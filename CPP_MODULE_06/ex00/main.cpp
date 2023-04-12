/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/04/12 14:44:10 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(void)	{
	//Convert	i("2147483648");
	Convert		i("3.402823467e+38F");
	// Convert			i("b");
	
	try{
		i.findType();
	} catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
}