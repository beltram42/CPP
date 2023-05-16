#include <vector>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <algorithm>
#include <functional>


#include <cstddef>  // For std::size_t

template<typename Iterator>
class group_iterator	{
private:
    Iterator _it;
    std::size_t _size;

public:
    typedef std::random_access_iterator_tag iterator_category;
    typedef Iterator iterator_type;
    typedef typename std::iterator_traits<Iterator>::value_type value_type;
    typedef typename std::iterator_traits<Iterator>::difference_type difference_type;
    typedef typename std::iterator_traits<Iterator>::pointer pointer;
    typedef typename std::iterator_traits<Iterator>::reference reference;

    group_iterator() {}

    group_iterator(Iterator it, std::size_t size): _it(it), _size(size)	{}

    iterator_type base() const	{
        return _it;
    }

    std::size_t size() const	{
        return _size;
    }

    reference operator*() const	{
        return *(_it + (_size - 1));
    }

    pointer operator->() const	{
        return &(operator*());
    }

    group_iterator& operator++()	{
        _it += _size;
        return *this;
    }

    group_iterator operator++(int)	{
        group_iterator tmp = *this;
        operator++();
        return tmp;
    }

    group_iterator& operator--()	{
        _it -= _size;
        return *this;
    }

    group_iterator operator--(int)	{
        group_iterator tmp = *this;
        operator--();
        return tmp;
    }

    group_iterator& operator+=(difference_type increment)	{
        _it += _size * increment;
        return *this;
    }

    group_iterator& operator-=(difference_type increment)	{
        _it -= _size * increment;
        return *this;
    }

    value_type& operator[](std::size_t pos)	{
        return *(_it + (pos * _size) + (_size - 1));
    }
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

int main(int argc, char** argv) {
    std::vector<std::string> vec;

    std::cout << "   Before:" << std::endl;
    std::cout << "   -------" << std::endl;
    for (int i = 1; i < argc; i++)
        std::cout << std::string(argv[i]) << " ";
    std::cout << std::endl << std::endl << std::endl;

    vec.reserve(argc - 1);
    std::copy(argv + 1, argv + argc, std::back_inserter(vec));

    merge_insertion_sort(vec.begin(), vec.end(), std::less<std::string>());
    std::cout << std::endl;
    // Print the sorted vector
    std::cout << "   After:" << std::endl;
    std::cout << "   ------" << std::endl;
    for (std::vector<std::string>::iterator it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl << std::endl << std::endl;

    return 0;
}