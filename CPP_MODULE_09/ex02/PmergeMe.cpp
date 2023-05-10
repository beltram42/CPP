/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/05/10 13:29:32 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// Constructor Destructor *************************************************** //
listMIS::listMIS(void)	{}
listMIS::listMIS(listMIS const & toCopy) : _j(toCopy._j), _N(toCopy._N), _subLQ(toCopy._subLQ), _timeS(toCopy._timeS), _timeE(toCopy._timeE)	{
	std::copy(toCopy._lst.begin(), toCopy._lst.end(), _lst.begin());
}
listMIS::listMIS(int argc, char ** argv) : _j(0), _N(argc - 1), _subLQ(((argc % 2) == 0 ? (argc - 1) : (argc)))	{
	std::string	input;
	for (int i = 1; i < argc; i++)	{
		input += argv[i];
		input += ' ';
	}

	if (input.empty() != 0)
		throw std::invalid_argument("listMIS: Invalid argument input: string input");

	std::istringstream	iss(input);
	unsigned int num;

	while (iss >> num)
		this->_lst.push_back(num);

	if (this->_lst.empty() != 0 || this->_lst.size() != static_cast<unsigned long>(argc -1))
		throw std::invalid_argument("listMIS: Invalid argument input: list push_back issue");
	
	std::cout << "listMIS with arguments constructor called" << std::endl;
}
listMIS::~listMIS(void)	{
	std::cout << "listMIS destructor called" << std::endl;
}


vectorMIS::vectorMIS(void)	{}
vectorMIS::vectorMIS(vectorMIS const & toCopy) : _j(toCopy._j), _N(toCopy._N), _subVQ(toCopy._subVQ), _timeS(toCopy._timeS), _timeE(toCopy._timeE)	{
	std::copy(toCopy._vec.begin(), toCopy._vec.end(), _vec.begin());
}
vectorMIS::vectorMIS(int argc, char ** argv) : _j(0), _N(argc - 1), _subVQ(((argc % 2) == 0 ? (argc - 1) : (argc)))	{
	std::string	input;
	for (int i = 1; i < argc; i++)	{
		input += argv[i];
		input += ' ';
	}

	if (input.empty() != 0)
		throw std::invalid_argument("vectorMIS: Invalid argument input: : string input");

	std::istringstream	iss(input);
	unsigned int num;

	while (iss >> num)
		this->_vec.push_back(num);

	if (this->_vec.empty() != 0 || this->_vec.size() != static_cast<unsigned long>(argc -1))
		throw std::invalid_argument("vectorMIS: Invalid argument input: vector push_back issue");
	
	std::cout << "vectorMIS with arguments constructor called" << std::endl;
}
vectorMIS::~vectorMIS(void)	{
	std::cout << "vectorMIS destructor called" << std::endl;
}
// *************************************************** Constructor Destructor //


// Member functions ********************************************************* //

// -- Operators overload ---------------------------------------------------- //
listMIS		&listMIS::operator=(listMIS const & toCopy)	{
	this->_j = toCopy._j;
	this->_N = toCopy._N;
	this->_subLQ = toCopy._subLQ;
	this->_timeS = toCopy._timeS;
	this->_timeE = toCopy._timeE;
	std::copy(toCopy._lst.begin(), toCopy._lst.end(), _lst.begin());
	return (*this);
}

vectorMIS	&vectorMIS::operator=(vectorMIS const & toCopy)	{
	this->_j = toCopy._j;
	this->_N = toCopy._N;
	this->_subVQ = toCopy._subVQ;
	this->_timeS = toCopy._timeS;
	this->_timeE = toCopy._timeE;
	std::copy(toCopy._vec.begin(), toCopy._vec.end(), _vec.begin());
	return (*this);
}
// ---------------------------------------------------- Operators overload -- //

// -- Functions overload ---------------------------------------------------- //
// ---------------------------------------------------- Functions overload -- //

// -- Accessors ------------------------------------------------------------- //
std::list<unsigned int>		&listMIS::getL(void) {
	return (_lst);
}


std::vector<unsigned int>	&vectorMIS::getV(void)	{
	return (_vec);
}
// ------------------------------------------------------------- Accessors -- //

// -- Exceptions ------------------------------------------------------------ //
// ------------------------------------------------------------ Exceptions -- //

// -- Other member functions ------------------------------------------------ //
// void listMIS::fjMIS(std::list<int>& lst) {
// 	std::list<unsigned int>* sublists = new std::list<unsigned int>[numSublists];

// 	std::list<unsigned int>::iterator it = lst.begin();
// 	if (sublists->empty()) {

// 		for (unsigned int i = 0; i < numSublists; i++) {
// 			if (i == numSublists - 1 && N % 2 != 0) {
// 				sublists[i].push_back(*it);
// 				it++;
// 			}
		

// 			sublists[i].push_back(*it);
// 			it++;
// 			sublists[i].push_back(*it);
// 			it++;

// 			if (sublists[i].front() > sublists[i].back()) {
// 				unsigned int temp = sublists[i].front();
// 				sublists[i].front() = sublists[i].back();
// 				sublists[i].back() = temp;
// 			}
// 		}
// 	}

//     // Sort each sublist recursively based on the x element
//     while (j < numSublists) {
// 		j++;
//         fj_sort(sublists[i], 0);
//     }
// 	// Print sublists[i]
// 	for (unsigned int i = 0; i < numSublists; i++)	{
// 		for (std::list<unsigned int>::iterator its = sublists[i].begin(), its != sublists[i].end(), its++)
// 			std::cout << "sublists[" << i << "] = " << *its << std::endl;
// 	}

// 	if (lst.size() > 0)
// 	    lst.clear();

//     // Merge the sorted sublists back into the original list
//     for (unsigned int i = 0; i < numSublists; i++) {
//         lst.splice(lst.end(), sublists[i]);
//     }

//     // Free the memory used by the sublists
//     delete[] sublists;d);
// 	lst.swap(merged);
// }
// ----------------------------------------------- Other  member functions -- //

// ********************************************************* Member functions //


// Non Member functions ***************************************************** //
std::ostream &operator<<(std::ostream &out, listMIS &input)	{
	out << std::endl;
	out << "// List merge insert sort =================================================== //" << std::endl;
	out << "   Before:" << std::endl;
	out << "   -------" << std::endl;
	std::list<unsigned int>::iterator it = input.getL().begin();
	std::list<unsigned int>::iterator ite = input.getL().end();
	while (it != ite)	{
		out << *it << " ";
		it++;
	}
	out << std::endl << std::endl << std::endl;

	return (out);
}

std::ostream &operator<<(std::ostream &out, vectorMIS &input)	{
	out << "// Vector merge insert sort ================================================= //" << std::endl;
	out << "   Before:" << std::endl;
	out << "   -------" << std::endl;
	std::vector<unsigned int>::iterator it = input.getV().begin();
	std::vector<unsigned int>::iterator ite = input.getV().end();
	while (it != ite)	{
		out << *it << " ";
		it++;
	}
	out << std::endl << std::endl;

	return (out);
}
// ***************************************************** Non Member functions //




// CAVE ********************************************************************* //
// void listMIS::fjMIS(std::list<int>& lst) {
// 	std::list<int> first, second;

// 	while (!lst.empty()) {
// 		if (lst.front() < lst.back() && (second.empty() || lst.front() < second.front())) {
// 			first.splice(first.end(), lst, lst.begin());
// 		}
// 		else if (lst.front() > lst.back() && (first.empty() || lst.front() > first.back())) {
// 			second.splice(second.begin(), lst, lst.begin());
// 		}
// 		else {
// 			first.splice(first.end(), lst, lst.begin());
// 		}
// 	}

// 	first.sort();
// 	second.sort();

// 	std::list<int> merged;
// 	merged.merge(first);
// 	merged.merge(second);
// 	lst.swap(merged);
// }