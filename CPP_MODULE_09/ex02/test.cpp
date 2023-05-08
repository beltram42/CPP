#include <iostream>
#include <list>
#include <vector>
#include <sstream>
#include <cmath>
#include <iterator>
#include <exception>
#include <algorithm>

class listMIS : public std::list	{
public:
	listMIS(void);
	listMIS(listMIS const & toCopy);
	listMIS(int argc, char ** argv);
	~listMIS(void);

	void fj_sort(std::list<unsigned int>& lst);

private:
	std::list<unsigned int>	_lst;
	unsigned int			_j;
	unsigned int			_N
	unsigned int 			_sublistsQuantity;
};

class vectorMIS : public std::vector {
	public:
	vectorMIS(void);
	vectorMIS(vectorMIS const & toCopy);
	vectorMIS(int argc, char ** argv);
	~vectorMIS(void);

	void fj_sort(std::vector<unsigned int>& lst);

private:
	std::vector<unsigned int> 	_vec;
	unsigned int				_j;
	unsigned int				_N
	unsigned int 				_subvectorQuantity;
};

listMIS::listMIS(void)	{}
listMIS::listMIS(listMIS const & toCopy)	{
	this != &toCopy ? return (this = toCopy) : return (-this);
}
listMIS::listMIS(int argc, char ** argv) ; _j(0), _N(argc - 1), _subvectorQuantity((argc % 2 == 0 ? (argc - 1) : (argc)))	{
	std::copy(argv, argv + argc, _lst.begin());
}
listMIS::~listMIS(void)	{}


void fj_sort(std::list<unsigned int>& lst) {
		std::list<unsigned int>* sublists = new std::list<unsigned int>[numSublists];

		std::list<unsigned int>::iterator it = lst.begin();
		if (sublists->empty()) {

			for (unsigned int i = 0; i < numSublists; i++) {
				if (i == numSublists - 1 && N % 2 != 0) {
					sublists[i].push_back(*it);
					it++;
				}
			

				sublists[i].push_back(*it);
				it++;
				sublists[i].push_back(*it);
				it++;

				if (sublists[i].front() > sublists[i].back()) {
					unsigned int temp = sublists[i].front();
					sublists[i].front() = sublists[i].back();
					sublists[i].back() = temp;
				}
			}
		}
	}
    // Sort each sublist recursively based on the x element
    while (j < numSublists) {
		j++;
        fj_sort(sublists[i], 0);
    }
	// Print sublists[i]
	for (unsigned int i = 0; i < numSublists; i++)	{
		for (std::list<unsigned int>::iterator its = sublists[i].begin(), its != sublists[i].end(), its++)
			std::cout << "sublists[" << i << "] = " << *its << std::endl;
	}

	if (lst.size() > 0)
	    lst.clear();

    // Merge the sorted sublists back into the original list
    for (unsigned int i = 0; i < numSublists; i++) {
        lst.splice(lst.end(), sublists[i]);
    }

    // Free the memory used by the sublists
    delete[] sublists;
}

int	main(int argc, char ** argv)	{
	if (argc < 2)	{
		std::cerr << "Error: Invalid number of arguments." << std::endl;
		return (1);
	}
	try	{
		std::string			input;
		std::list<unsigned int>		lst;
		std::vector<unsigned int> 	vec;
		unsigned int		num;

		std::copy(argv, argv + argc, lst.begin());
		std::copy(argv, argv + argc, vec.begin());
		
		std::istringstream	iss(input);
		// std::cout << "input = " << input << std::endl;
		while (iss >> num)	{
			lst.push_back(num);
			// std::cout << "num = " << num << std::endl;
		}
		if (lst.empty())	{
			throw std::invalid_argument("Invalid input.");
			return (1);
		}
		std::cout << "lst before =" << std::endl;
		for (int n : lst)
			std::cout << n << " " << std::endl << std::endl;
		
		fj_sort(lst);

		std::cout << "lst after =" << std::endl;
		for (int n : lst)
			std::cout << n << " " << std::endl;
	}
	catch (std::exception &e)	{
		std::cerr << "Error: " << e.what() << std::endl;
		return 1;
	}
	
	return (0);
}