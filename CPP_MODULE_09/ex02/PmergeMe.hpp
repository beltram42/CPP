/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/05/16 18:10:24 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
# define PMERGEME_H

// Libraries **************************************************************** //
#include <iostream>
#include <iomanip>
#include <functional>
#include <ctime>
#include <list>
#include <vector>
#include <sstream>
#include <cmath>
#include <iterator>
#include <exception>
#include <algorithm>
#include <cstddef> 

// **************************************************************** Libraries //



// Colours ****************************************************************** //
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[33m"
#define MAGENTA "\e[35m"
#define CLEAR "\e[0m"
// ****************************************************************** Colours //


// Enums ******************************************************************** //
// ******************************************************************** Enums //


// Templates **************************************************************** //
template<typename Iterator>
class group_iterator	{
public:
    typedef std::random_access_iterator_tag iterator_category;
    typedef Iterator iterator_type;
    typedef typename std::iterator_traits<Iterator>::value_type value_type;
    typedef typename std::iterator_traits<Iterator>::difference_type difference_type;
    typedef typename std::iterator_traits<Iterator>::pointer pointer;
    typedef typename std::iterator_traits<Iterator>::reference reference;

    group_iterator()	{}								// Canonical
	group_iterator(group_iterator const & toCopy)	{	// Canonical
		if (this != &toCopy)
			*this = toCopy;
	}
    group_iterator(Iterator it, std::size_t size): _it(it), _size(size)	{}
	~group_iterator()	{}								// Canonical

    iterator_type	base() const	{
        return _it;
    }

    std::size_t 	size() const	{
        return _size;
    }

    reference 		operator*() const	{
        return *(_it + (_size - 1));
    }

    pointer 		operator->() const	{
        return &(operator*());
    }

	group_iterator	&operator=(group_iterator const & toCopy)	{ // Canonical
		if (this != &toCopy)
			*this = toCopy;
		return (*this);
	}
    group_iterator	&operator++()	{
        _it += _size;
        return *this;
    }

    group_iterator	operator++(int)	{
        group_iterator tmp = *this;
        operator++();
        return tmp;
    }

    group_iterator	&operator--()	{
        _it -= _size;
        return *this;
    }

    group_iterator	operator--(int)	{
        group_iterator tmp = *this;
        operator--();
        return tmp;
    }

    group_iterator	&operator+=(difference_type increment)	{
        _it += _size * increment;
        return *this;
    }

    group_iterator	&operator-=(difference_type increment)	{
        _it -= _size * increment;
        return *this;
    }

    value_type		&operator[](std::size_t pos)	{
        return *(_it + (pos * _size) + (_size - 1));
    }

private:
    Iterator _it;
    std::size_t _size;
};

template<typename Iterator1, typename Iterator2>
void iter_swap(group_iterator<Iterator1> lhs, group_iterator<Iterator2> rhs)	{
    for (std::size_t i = 0; i < lhs.size(); ++i)	{
        std::iter_swap(lhs.base() + i, rhs.base() + i);
    }
}

template<typename Iterator1, typename Iterator2>
bool operator==(const group_iterator<Iterator1>& lhs, const group_iterator<Iterator2>& rhs)	{
    return lhs.base() == rhs.base();
}

template<typename Iterator1, typename Iterator2>
bool operator!=(const group_iterator<Iterator1>& lhs, const group_iterator<Iterator2>& rhs)	{
    return !(lhs == rhs);
}

template<typename Iterator1, typename Iterator2>
bool operator<(const group_iterator<Iterator1>& lhs, const group_iterator<Iterator2>& rhs)	{
    return lhs.base() < rhs.base();
}

template<typename Iterator1, typename Iterator2>
bool operator<=(const group_iterator<Iterator1>& lhs, const group_iterator<Iterator2>& rhs)	{
    return !(rhs < lhs);
}

template<typename Iterator1, typename Iterator2>
bool operator>(const group_iterator<Iterator1>& lhs, const group_iterator<Iterator2>& rhs)	{
    return rhs < lhs;
}

template<typename Iterator1, typename Iterator2>
bool operator>=(const group_iterator<Iterator1>& lhs, const group_iterator<Iterator2>& rhs)	{
    return !(lhs < rhs);
}

template<typename Iterator>
group_iterator<Iterator> operator+(group_iterator<Iterator> it, std::size_t size)	{
    return it += size;
}

template<typename Iterator>
group_iterator<Iterator> operator+(std::size_t size, group_iterator<Iterator> it)	{
    return it += size;
}

template<typename Iterator>
group_iterator<Iterator> operator-(group_iterator<Iterator> it, std::size_t size)	{
    return it -= size;
}

template<typename Iterator>
typename group_iterator<Iterator>::difference_type
operator-(const group_iterator<Iterator>& lhs, const group_iterator<Iterator>& rhs)	{
    return (lhs.base() - rhs.base()) / lhs.size();
}

template<typename Iterator>
group_iterator<Iterator> make_group_iterator(Iterator it, std::size_t size)	{
    return group_iterator<Iterator>(it, size);
}

template<typename Iterator>
group_iterator<Iterator> make_group_iterator(group_iterator<Iterator> it, std::size_t size)	{
    return group_iterator<Iterator>(it.base(), size * it.size());
}

template<typename RandomAccessIterator, typename Compare>
void merge_insertion_sort_impl(RandomAccessIterator first, RandomAccessIterator last, Compare compare)	{
    typedef typename std::iterator_traits<RandomAccessIterator>::difference_type difference_type;

    difference_type size = std::distance(first, last);
    if (size < 2) return;

    bool has_stray = (size % 2 != 0);

    RandomAccessIterator end = has_stray ? (last - 1) : last;
    for (RandomAccessIterator it = first; it != end; it += 2)	{
        if (compare(it[1], it[0]))
            std::swap(*it, *(it + 1));
		std::cout << "(" << *it << ", " << *(it + 1) << ") ";
    }
	std::cout << std::endl;
	std::cout << std::endl;
	
	for (RandomAccessIterator its = first; its != end; its++)
		std::cout << *its << " ";
	std::cout << std::endl;
	std::cout << std::endl;

    merge_insertion_sort_impl(
        make_group_iterator(first, 2),
        make_group_iterator(end, 2),
        compare
    );
}

template<typename RandomAccessIterator, typename Compare>
void merge_insertion_sort(RandomAccessIterator first, RandomAccessIterator last, Compare compare)
{
    merge_insertion_sort_impl(
        make_group_iterator(first, 1),
        make_group_iterator(last, 1),
        compare
    );
}
// **************************************************************** Templates //

// Structs ****************************************************************** //
// ****************************************************************** Structs //

// Classes ****************************************************************** //
class listMIS	{
public:
	listMIS(void);										// Canonical
	listMIS(listMIS const & toCopy);					// Canonical
	listMIS(int argc, char ** argv);
	~listMIS(void);										// Canonical

	listMIS	&operator=(listMIS const & toCopy);			// Canonical

	std::list<std::string> 			&getL(void);
	void 							fjMIS(std::list<std::string> & lst);

private:
	std::list<std::string>			_lst;
	unsigned int					_j;
	unsigned int					_N;					// number of arguments
	unsigned int 					_subLQ;				// sublist quantity
	clock_t							_timeS;				// time start
	clock_t							_timeE;				// time end
};

class vectorMIS	{
	public:
	vectorMIS(void);									// Canonical
	vectorMIS(vectorMIS const & toCopy);				// Canonical
	vectorMIS(int argc, char ** argv);
	~vectorMIS(void);									// Canonical

	vectorMIS	&operator=(vectorMIS const & toCopy);	// Canonical

	std::vector<std::string> 		&getV(void);
	void 							fjMIS(std::vector<std::string> & lst);

private:
	std::vector<std::string> 		_vec;
	unsigned int					_j;
	unsigned int					_N;					// number of arguments
	unsigned int 					_subVQ;				// subvector quantity
	clock_t							_timeS;				// time start
	clock_t							_timeE;				// time end
};

// ****************************************************************** Classes //


// Non Member functions ***************************************************** //
void			checkInput(int argc, char ** argv);

std::ostream	&operator<<(std::ostream &out, listMIS &input);
std::ostream	&operator<<(std::ostream &out, vectorMIS &input);
// ***************************************************** Non Member functions //

#endif // ******************************************************** PMERGEME_H //