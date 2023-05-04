/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/05/04 17:49:27 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H

// Libraries **************************************************************** //
#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cctype>
#include <cstdlib>
#include <limits>
#include <climits>
#include <exception>
#include <cerrno>
// **************************************************************** Libraries //



// Colours ****************************************************************** //
#define CLEAR "\e[0m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[33m"
#define MAGENTA "\e[35m"
// ****************************************************************** Colours //



// Enums ******************************************************************** //
// ******************************************************************** Enums //


// Templates **************************************************************** //
// **************************************************************** Templates //

// Structs ****************************************************************** //
// ****************************************************************** Structs //

// Classes ****************************************************************** //
// class RPN {
// public:
//     RPN(const std::string &expr);
//     ~RPN();
//     int calculate();
// private:
//     std::stack<int> _stack;
//     std::string _expr;
//     bool is_operator(const std::string& str);
//     int perform_operation(const std::string& op, int left, int right);
// };

class RPN {
public:
    RPN(const std::string &expr);
    ~RPN();
    RPN(const RPN &src);
    RPN &operator=(const RPN &rhs);

    void    parseInput(const std::string &expr);
    int     getResult() const;

    class Error : public std::runtime_error {
    public:
        Error(const std::string &msg);
        virtual ~Error() throw();
    };

private:
    RPN();

    std::stack<int> _stack;
    int _result;

    int performOperation(const std::string &op, int left, int right) const;
};
// ****************************************************************** Classes //


// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //

#endif // ************************************************************* RPN_H //