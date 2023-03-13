/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d00_00.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:46:20 by alambert          #+#    #+#             */
/*   Updated: 2023/03/01 16:03:52 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	gl_var = 1;
int	f(void) {return 2;}

namespace Foo {
	int	gl_var = 3;
	int	f(void) {return 4;}
}

namespace Bar {
	int	gl_var = 5;
	int	f(void) {return 6;}
}

namespace Muf = Bar;


int	main(void)
{
	printf("gl_vat : [%d]\n", gl_var);
	printf("f() : [%d]\n", f());

	printf("Foo::gl_vat : [%d]\n", Foo::gl_var);
	printf("Foo::f() : [%d]\n\n", Foo::f());

	printf("Bar::gl_vat : [%d]\n", Bar::gl_var);
	printf("Bar::f() : [%d]\n\n", Bar::f());

	printf("Muf::gl_vat : [%d]\n", Muf::gl_var);
	printf("Muf::f() : [%d]\n\n", Muf::f());

	printf("::gl_vat : [%d]\n", ::gl_var);
	printf("::f() : [%d]\n\n", ::f());

	return 0;
}