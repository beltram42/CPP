/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/05/06 14:43:50 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv) {
  if (argc != 2) {
   std::cerr << "Invalid input." << std::endl;
    return 1;
  }

  try {
    RPN rpn(argv[1]);
    int result = rpn.getResult();
    std::cout << result << std::endl;
  }
  catch (std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
    return 1;
  }

  return 0;
}


// EXAMPLES OF OUTPUTS ****************************************************** //

// **__From exercise subject__**

// "1 2 * 2 / 2 + 5 * 6 - 1 3 * - 4 5 * * 8 /"
// (output: 15) 

// "9 8 * 4 * 4 / 2 + 9 - 8 - 8 - 1 - 6 -"
// (output: 42)

// "8 9 * 9 - 9 - 9 - 4 - 1 +"
// (output: 42)

// "1 1 1 1 + + + 1 1 1 + + +"
// (output: 7)


// **__Personal tests__**
// "6 5 * 4 3 * +"
// (output: 42)

// "6 -5 * 4 3 * +"
// (output: -18)

// "9 9 9 9 9 9 9 9 * * * * * * * 7 7 * * 9 9 9 9 9 9 9 7 * * * * * * * + 9 9 9 9 9 9 8 * * * * * * + 9 9 9 9 9 7 * * * * * + 9 9 9 9 7 * * * * + 9 9 9 3 * * * + 9 9 6 * * + 9 7 * + 1 +"
// (output: 2147483647)

// "9 9 9 9 9 9 9 9 * * * * * * * 7 7 * * 9 9 9 9 9 9 9 7 * * * * * * * + 9 9 9 9 9 9 8 * * * * * * + 9 9 9 9 9 7 * * * * * + 9 9 9 9 7 * * * * + 9 9 9 3 * * * + 9 9 6 * * + 9 7 * + 1 + 1 +"
// (output: Error: Overflow detected in + operator)
// => possible issue if not handled properly : Output = -2147483648 or alike

// "-9 9 9 9 9 9 9 9 * * * * * * * 7 7 * * 9 9 9 9 9 9 9 7 * * * * * * * - 9 9 9 9 9 9 8 * * * * * * - 9 9 9 9 9 7 * * * * * - 9 9 9 9 7 * * * * - 9 9 9 3 * * * - 9 9 6 * * - 9 7 * - 1 - 1 - 1 -"
// (Output: Error: Overflow detected in + operator)
// => idem

// "8 8 8 8 8 8 8 8 8 8 * * * * * * * * *"
// (output: 1073741824)

// "8 8 8 8 8 8 8 8 8 8 8 * * * * * * * * * *"
// (Output: Error: Overflow detected in * operator)
// => possible issue if not handled properly : Output = 0