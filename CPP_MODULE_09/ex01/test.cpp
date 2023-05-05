#include <iostream>
#include <string>
#include <sstream>

int	main(int argc, char ** argv)	{
	if (argc != 2) {
    	std::cerr << "Error: Invalid number of arguments\n";
   		return 1;
	}
	else	{
		int	value = 0;
		std::string			input (argv[1]);
		std::istringstream	iss(input);
		std::string			token;
		while (iss >> token)	{
			std::cout << "token = " << ">" << token << "<" << std::endl;
			if (isdigit(token[0]) || (token.size() == 2 && isdigit(token[1])))
			else if (token.size() == 1 && )
		}

	}
	return 0;
}