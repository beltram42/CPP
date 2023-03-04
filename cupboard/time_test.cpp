/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 19:35:11 by alambert          #+#    #+#             */
/*   Updated: 2023/03/04 19:40:50 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>

int main() {
  std::time_t const result = std::time(nullptr);
  std::cout << result << std::endl;
  std::cout << std::asctime(std::localtime(& result));
}