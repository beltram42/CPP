/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:26:29 by alambert          #+#    #+#             */
/*   Updated: 2023/03/14 00:56:52 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

// Constructor Destructor *************************************************** //
Replace::Replace(/* args */) {
}

Replace::~Replace() {
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //

void    Replace::ft_Replace(std::string file, std::string str1, std::string str2)
{
    std::string     str, buff, fileName;
    std::size_t     found(0);
    
    std::ifstream   inFile (file.c_str());
    if (!inFile) {
        std::cout << "*** Error, file cannot be open or read" << std::endl;
        return;
    }
    fileName = file += ".replace";
    std::ofstream outFile(fileName.c_str());
    if (!outFile) {
        std::cout << "*** Error, file cannot be created" << std::endl;
        return;
    }
    while (std::getline(inFile, str)) {
        buff.append(str.append("\n"));
    } 
    while ((found = buff.find(str1)) >= 0 && found != std::string::npos) {
        buff.erase(found, str1.size());
		buff.insert(found, str2);
    }
    inFile.close();
    outFile << buff;
    outFile.close();
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //