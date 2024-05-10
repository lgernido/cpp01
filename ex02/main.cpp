/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:20:57 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/10 13:30:14 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Address of string: " << &str << std::endl;
    std::cout << "Address in string pointer: " << stringPTR << std::endl;
    std::cout << "Adress in string reference: " << &stringREF << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "Value of string: " << str << std::endl;
    std::cout << "Value pointed by the pointer: " << *stringPTR << std::endl;
    std::cout << "Value pointed by string reference: " << stringREF << std::endl;
    return(0);
}