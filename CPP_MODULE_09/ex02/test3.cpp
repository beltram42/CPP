#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstddef>
// #include <cstdint>
#include <functional>
#include <list>
#include <iterator>
// #include <type_traits>
#include <vector>






#include <cstddef> // For std::size_t

template<typename Iterator>
class group_iterator
{
    private:

        Iterator _it;
        std::size_t _size;

    public:

        ////////////////////////////////////////////////////////////
        // Public types

        typedef std::random_access_iterator_tag iterator_category;
        typedef Iterator iterator_type;
        typedef typename std::iterator_traits<Iterator>::value_type value_type;
        typedef typename std::iterator_traits<Iterator>::difference_type difference_type;
        typedef typename std::iterator_traits<Iterator>::pointer pointer;
        typedef typename std::iterator_traits<Iterator>::reference reference;

        ////////////////////////////////////////////////////////////
        // Constructors

        group_iterator() {}

        group_iterator(Iterator it, std::size_t size):
            _it(it),
            _size(size)
        {}

        ////////////////////////////////////////////////////////////
        // Members access

        iterator_type base() const
        {
            return _it;
        }

        std::size_t size() const
        {
            return _size;
        }

        ////////////////////////////////////////////////////////////
        // Element access

        reference operator*() const
        {
            return _it[_size - 1];
        }

        pointer operator->() const
        {
            return &(operator*());
        }

        ////////////////////////////////////////////////////////////
        // Increment/decrement operators

        group_iterator& operator++()
        {
            _it += _size;
            return *this;
        }

        group_iterator operator++(int)
        {
            group_iterator tmp = *this;
            operator++();
            return tmp;
        }

        group_iterator& operator--()
        {
            _it -= _size;
            return *this;
        }

        group_iterator operator--(int)
        {
            group_iterator tmp = *this;
            operator--();
            return tmp;
        }

        group_iterator& operator+=(std::size_t increment)
        {
            _it += _size * increment;
            return *this;
        }

        group_iterator& operator-=(std::size_t increment)
        {
            _it -= _size * increment;
            return *this;
        }

        ////////////////////////////////////////////////////////////
        // Elements access operators

		typedef ValueType value_type;
		// Rest of the code
		value_type& operator[](std::size_t pos)
		{
			return _it[pos * _size + _size - 1];
		}

        typedef typename Iterator::value_type value_type;  // Add this line
		// Rest of the code
		value_type& operator[](std::size_t pos)
		{
			return _it[pos * _size + _size - 1];
		}

		typedef typename std::iterator_traits<_It>::value_type value_type;
		value_type& operator[](std::size_t pos) const
		{
			return _it[pos * _size + _size - 1];
		}
};
template<typename Iterator1, typename Iterator2>
void iter_swap(group_iterator<Iterator1> lhs, group_iterator<Iterator2> rhs)
{
    std::swap_ranges(lhs.base(), lhs.base() + lhs.size(), rhs.base());
}

////////////////////////////////////////////////////////////
// Comparison operators

template<typename Iterator1, typename Iterator2>
bool operator==(const group_iterator<Iterator1>& lhs,
                const group_iterator<Iterator2>& rhs)
{
    return lhs.base() == rhs.base();
}

template<typename Iterator1, typename Iterator2>
bool operator!=(const group_iterator<Iterator1>& lhs,
                const group_iterator<Iterator2>& rhs)
{
    return lhs.base() != rhs.base();
}

////////////////////////////////////////////////////////////
// Relational operators

template<typename Iterator1, typename Iterator2>
bool operator<(const group_iterator<Iterator1>& lhs,
               const group_iterator<Iterator2>& rhs)
{
    return lhs.base() < rhs.base();
}

template<typename Iterator1, typename Iterator2>
bool operator<=(const group_iterator<Iterator1>& lhs,
                const group_iterator<Iterator2>& rhs)
{
    return lhs.base() <= rhs.base();
}

template<typename Iterator1, typename Iterator2>
bool operator>(const group_iterator<Iterator1>& lhs,
               const group_iterator<Iterator2>& rhs)
{
    return lhs.base() > rhs.base();
}

template<typename Iterator1, typename Iterator2>
bool operator>=(const group_iterator<Iterator1>& lhs,
                const group_iterator<Iterator2>& rhs)
{
    return lhs.base() >= rhs.base();
}

////////////////////////////////////////////////////////////
// Arithmetic operators

template<typename Iterator>
group_iterator<Iterator> operator+(group_iterator<Iterator> it, std::size_t size)
{
    return it += size;
}

template<typename Iterator>
group_iterator<Iterator> operator+(std::size_t size, group_iterator<Iterator> it)
{
    return it += size;
}

template<typename Iterator>
group_iterator<Iterator> operator-(group_iterator<Iterator> it, std::size_t size)
{
    return it -= size;
}

template<typename Iterator>
typename group_iterator<Iterator>::difference_type
operator-(const group_iterator<Iterator>& lhs, const group_iterator<Iterator>& rhs)
{
    return (lhs.base() - rhs.base()) / lhs.size();
}

////////////////////////////////////////////////////////////
// Construction function

template<typename Iterator>
group_iterator<Iterator> make_group_iterator(Iterator it, std::size_t size)
{
    return group_iterator<Iterator>(it, size);
}

template<typename Iterator>
group_iterator<Iterator> make_group_iterator(group_iterator<Iterator> it, std::size_t size)
{
    return group_iterator<Iterator>(it.base(), size * it.size());
}



template<
    typename RandomAccessIterator,
    typename Compare
>
void merge_insertion_sort_impl(RandomAccessIterator first, RandomAccessIterator last,
                               Compare compare)
{
    // Cache all the differences between a Jacobsthal number and its
    // predecessor that fit in 64 bits, starting with the difference
    // between the Jacobsthal numbers 4 and 3 (the previous ones are
    // unneeded)
    static const unsigned long long jacobsthal_diff[] = {
        2ull, 2ull, 6ull, 10ull, 22ull, 42ull, 86ull, 170ull, 342ull, 682ull, 1366ull,
        2730ull, 5462ull, 10922ull, 21846ull, 43690ull, 87382ull, 174762ull, 349526ull, 699050ull,
        1398102ull, 2796202ull, 5592406ull, 11184810ull, 22369622ull, 44739242ull, 89478486ull,
        178956970ull, 357913942ull, 715827882ull, 1431655766ull, 2863311530ull, 5726623062ull,
        11453246122ull, 22906492246ull, 45812984490ull, 91625968982ull, 183251937962ull,
        366503875926ull, 733007751850ull, 1466015503702ull, 2932031007402ull, 5864062014806ull,
        11728124029610ull, 23456248059222ull, 46912496118442ull, 93824992236886ull, 187649984473770ull,
        375299968947542ull, 750599937895082ull, 1501199875790165ull, 3002399751580331ull,
        6004799503160661ull, 12009599006321322ull, 24019198012642644ull, 48038396025285288ull,
        96076792050570576ull, 192153584101141152ull, 384307168202282304ull, 768614336404564608ull,
        1537228672809129216ull, 3074457345618258432ull, 6148914691236516864ull
    };

    using std::iter_swap;

    typename std::iterator_traits<RandomAccessIterator>::difference_type size = std::distance(first, last);
    if (size < 2) return;

    // Whether there is a stray element not in a pair
    // at the end of the chain
    bool has_stray = (size % 2 != 0);

    ////////////////////////////////////////////////////////////
    // Group elements by pairs

    RandomAccessIterator end = has_stray ? std::prev(last) : last;
    for (RandomAccessIterator it = first ; it != end ; it += 2)
    {
        if (compare(it[1], it[0]))
        {
            iter_swap(it, it + 1);
        }
    }

    ////////////////////////////////////////////////////////////
    // Recursively sort the pairs by max

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
	std::cout << "First loop:" << std::endl;
    std::cout << "Merge First: " << *(first) << ", Merge Second : " << *(last) << std::endl;
}

int main(int argc, char** argv) {

	std::vector<unsigned int>	vec;
	std::string	input;
	unsigned int num;

	for (int i = 1; i < argc; i++)	{
		input += argv[i];
		input += ' ';
	}
	std::cout << "before: " << input << std::endl << std::endl;
	// if (input.empty() != 0)
	// 	throw std::invalid_argument("vectorMIS: Invalid argument input: : string input");

	std::istringstream	iss(input);

	while (iss >> num)
		vec.push_back(num);

	// Create a vector of unsorted integers

	// Sort the vector using merge-insertion sort

	merge_insertion_sort(vec.begin(), vec.end(), compare());
	std::cout << std::endl;
	// Print the sorted vector
	std::cout << "after: ";
	for (auto i : vec) {
	std::cout << i << " ";
	}
	std::cout << std::endl;

	return 0;
}