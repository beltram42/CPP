/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 14:14:11 by alambert          #+#    #+#             */
/*   Updated: 2023/04/23 14:53:27 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max_int(int x, int y)		{return (x >= y ? x : y); }
float	max_float(float x, float y)	{return (x >= y ? x : y); }
char	max_char(char x, char y)	{return (x >= y ? x : y); }

int		foo(int x) {printf("Long computing time\n"); return x; }

#define max(x, y)	(((x) >= (y)) ? (x) : (y)) // macro parametrique

int		main(void)
{
	int		a = 21;
	int		b = 42;
	float	c = -1.7f;
	float	d = 4.2f;
	char	e = 'a';
	char	f = 'b';


	printf("Max of %d and %d is %d\n", a, b, max_int(a,b));
	printf("Max of %d and %d is %d\n\n", a, b, max(a,b));
	printf("Max of %f and %f is %f\n", c, d, max_float(c,d));
	printf("Max of %f and %f is %f\n\n", c, d, max(c,d));
	printf("Max of %c and %c is %c\n", e, f, max_char(e,f));
	printf("Max of %c and %c is %c\n\n", e, f, max(e,f));

	/* But... */
	printf("Max of %d and %d is %d\n", a, b, max_int(foo(a), foo(b)));
	printf("Max of %d and %d is %d\n", a, b, max(foo(a), foo(b)));
	// we thought we could solve the multiple declarations for multiple 
	// casts issue by usind a macro, but:
	// as seen in the exec, limit of macro is it will call tree times, 
	// instead of two, foo function.
	//
	// Same kind of issue occurs with other kind of declarations:
	// in the end you have to choose betwin long boring declarations
	// that will exec fast with no flaw and easier faster declarations
	// that will potentially execute slower with flaws.

	return (0);
}