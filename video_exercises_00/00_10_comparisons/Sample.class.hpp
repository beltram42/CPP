/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:19:26 by alambert          #+#    #+#             */
/*   Updated: 2023/03/03 18:29:48 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class	Sample {

public:

	Sample(int v);
	~Sample(void);

	int	getFoo(void) const;
	int	compare(Sample * other) const;

private:

	int	_Foo;

};

#endif // ****************************** SAMPLE_CLASS_H //