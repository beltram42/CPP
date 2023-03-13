/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:53:37 by alambert          #+#    #+#             */
/*   Updated: 2023/03/03 22:06:08 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class	Sample{

public:

	int	Foo;

	Sample();
	~Sample();

	void	bar(void) const;

private:
	/*Data*/
};

#endif //************************** SAMPLE_CLASS_H //