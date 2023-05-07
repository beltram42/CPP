#include <iostream>
#include <list>
#include <sstream>
#include <cmath>
#include <iterator>
#include <exception>
#include <algorithm>


unsigned int	j = 0;

void fj_sort(std::list<unsigned int>& lst) {
	if (!sublists)	{
		unsigned int N = lst.size();
		if (N <= 1)
			return;
		unsigned int numSublists = N / 2;
		if (N % 2 != 0)
			numSublists++;

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
		unsigned int		num;

		for (int i = 1; i < argc; i++)	{
			input += argv[i];
			input += ' ';
		}
		lst.clear();
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