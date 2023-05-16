#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <functional>
#include <list>
#include <iterator>
#include <type_traits>
#include <vector>


template <typename Iterator>
class groupIterators
{
public:
	groupIterators(void);
	groupIterators(Iterator it, std::size_t size): _it(it), _size(size){};
	~groupIterators();


private:
	Iterator _it;
	std::size_t _size;
};

groupIterator::groupIterators(void)	{}
groupIterator::groupIterators(Iterator it, std::size_t size): _it(it), _size(size){};

groupIterator::~groupIterators()	{}

auto base() const
	-> iterator_type
{
	return _it;
}

auto size() const
	-> std::size_t
{
	return _size;
}

////////////////////////////////////////////////////////////
// Element access

auto operator*() const
	-> reference
{
	return _it[_size - 1];
}

auto operator->() const
	-> pointer
{
	return &(operator*());
}

////////////////////////////////////////////////////////////
// Increment/decrement operators

auto operator++()
	-> group_iterator&
{
	_it += _size;
	return *this;
}

auto operator++(int)
	-> group_iterator
{
	auto tmp = *this;
	operator++();
	return tmp;
}

auto operator--()
	-> group_iterator&
{
	_it -= _size;
	return *this;
}

auto operator--(int)
	-> group_iterator
{
	auto tmp = *this;
	operator--();
	return tmp;
}

auto operator+=(std::size_t increment)
	-> group_iterator&
{
	_it += _size * increment;
	return *this;
}

auto operator-=(std::size_t increment)
	-> group_iterator&
{
	_it -= _size * increment;
	return *this;
}

////////////////////////////////////////////////////////////
// Elements access operators

auto operator[](std::size_t pos)
	-> decltype(_it[pos * _size + _size - 1])
{
	return _it[pos * _size + _size - 1];
}

auto operator[](std::size_t pos) const
	-> decltype(_it[pos * _size + _size - 1])
{
	return _it[pos * _size + _size - 1];
}
