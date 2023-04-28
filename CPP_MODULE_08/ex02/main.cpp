/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/04/27 15:57:47 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// int	main(void)	{
	
// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)	{
// 	std::cout << *it << std::endl;
// 	++it;
// 	}
// 	std::stack<int> s(mstack);
// 	return 0;
// }

int main ( void)
{
    std::cout << YELLOW << std::endl;
    std::cout << "GENERIC TEST WITH <LIST>" << std::endl;
    std::cout << "========================" << CLEAR<< std::endl;
    {
        std::list<int> mlist;
        mlist.push_back(5);
        mlist.push_back(17);
        std::cout << mlist.back() << std::endl;
        mlist.pop_back();
        std::cout << mlist.size() << std::endl;
        mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		mlist.push_back(0);
        std::list<int>::iterator it = mlist.begin();
		std::list<int>::iterator ite = mlist.end();
        ++it;
        --it;
        while (it != ite) {
            std::cout << *it << std::endl;
        ++it; }
        std::list<int> s(mlist);
    }

    std::cout << YELLOW << std::endl;
    std::cout << "TEST WITH OUR MUTANT <STACK>" << std::endl;
    std::cout << "============================" << CLEAR<< std::endl;
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
        MutantStack<int>::iterator its = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
        ++its;
        --its;
        while (its != ite) {
            std::cout << *its << std::endl;
        ++its; }
        std::stack<int> s(mstack);
    }

    
    return 0;
}