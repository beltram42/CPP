/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 10:53:11 by alambert          #+#    #+#             */
/*   Updated: 2023/03/25 11:31:02 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

// Libraries ******************************* //

#include <iostream>
// ******************************* Libraries //


// Classes ********************************* //
class Sample {

public:

	Sample(void);
	~Sample(void);

	void	bar(char const c) const;
	void	bar(int const n) const;
	void	bar(float const z) const;
	void	bar(Sample const & i) const;

private:

	/* dATA */

};
// ********************************* Classes //



#endif // ***********************************SAMPLE_CLASS_H //