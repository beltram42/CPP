#include <iostream>
#include <sstream>
#include<list>


// int main(int argc, char **argv) {
//   std::ostringstream oss;
//   for (int i = 0; i < argc; ++i)
//     oss << argv[i] << " ";
//   std::string input = oss.str();
//   std::cout << input << std::endl;
//   return 0;
// }

// #include <iostream>
// #include <list>
// #include <string>

// int main(int argc, char **argv) {
//   std::list<std::string> lst;
//   for (int i = 0; i < argc; i++) {
//     lst.push_back(argv[i]);
//   }
//   for (auto const &arg : lst) {
//     std::cout << arg << " ";
//   }
//   std::cout << std::endl;
//   return 0;
// }


// int main(int argc, char **argv) {
// 	std::list<int>		lst;
// 	std::ostringstream	oss;
// 	for (int i = 1; i < argc; ++i)
//     	oss << argv[i] << " ";
// 	std::istringstream	iss(oss.str());
// 	unsigned int			num;
// 	while (iss >> num)
// 		lst.push_back(num);
// 	for (std::list<int>::iterator i = lst.begin(); i != lst.end(); i++)
// 		std::cout << *i << " ";
// 	std::cout << std::endl;

  
//   return 0;
// }

// int main(int argc, char* argv[]) {
//   std::list<std::string> args{argv, argv + argc};
  
//   // Print the contents of the list
//   for (const auto& arg : args) {
//     std::cout << arg << " ";
//   }
  
//   return 0;
// }

// #include <algorithm>

// int main(int argc, char* argv[]) {
//   std::list<int> args;
//   std::transform(argv, argv + argc, std::back_inserter(args), std::atoi);

//   // Print the contents of the list
//   for (const auto& arg : args) {
//     std::cout << arg << " ";
//   }

//   return 0;
// }

#include <algorithm>

int main(int argc, char* argv[]) {
  std::list<int> args;
  std::transform(argv, argv + argc, std::back_inserter(args), std::atoi);

  // Print the contents of the list
  for (const auto& arg : args) {
    std::cout << arg << " ";
  }

  return 0;
}
