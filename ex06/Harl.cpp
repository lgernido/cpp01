/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 12:21:36 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/12 14:03:44 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Harl " << UNDERLINE << "constructor" << RESET << \
    " called" << std::endl;
    std::cout << std::endl;
}

Harl::~Harl()
{
    std::cout << "Harl " << UNDERLINE << "destructor" << RESET << \
    " called" << std::endl;
    std::cout << std::endl;
}

void Harl::complain(std::string level)
{
    std::string levels[4] = {"debug", "info", "warning", "error"};
    function_ptr complain[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    int i;
    i = -1;
    for (i = 0; i < 4; i++)
    {
        if (levels[i] == level)
            break;
    }
    switch(i)
    {
        case 0:
            (this->*complain[0])();
        case 1:
            (this->*complain[1])();
        case 2:
            (this->*complain[2])();
        case 3:
            (this->*complain[3])();
            break;
        default:
            std::cout << GREEN << BOLD << "[NOT A COMPLAIN LEVEL]" << RESET << std::endl;
            std::cout << GREEN << "For once we agree, Lebron James is the GOAT"  << RESET << std::endl;
            std::cout << std::endl;
            break;
    }
}

void Harl::debug(void)
{
    
    std::cout  << BOLD << "[DEBUG]"  << RESET << std::endl;
    std::cout << "From what I've seen, Lebron James is better basketball player than Michael Jordan !" << RESET << std::endl;
    std::cout << std::endl;
}

void Harl::info(void)
{
    std::cout << YELLOW << BOLD << "[INFO]" << RESET << std::endl;
    std::cout << YELLOW << "Lebron James is the all-time best scorer in the NBA whereas Michael Jordan is only 5th, that's why he is the GOAT." << RESET << std::endl;
    std::cout << std::endl;
}

void Harl::warning(void)
{
    std::cout << ORANGE << BOLD << "[WARNING]"  << RESET << std::endl;
    std::cout << ORANGE << "Michael Jordan is old and didn't even make the best Space Jam movie !" << std::endl;
    std::cout << RESET << std::endl;
}

void Harl::error(void)
{
    
    std::cout << RED  << BOLD << "[ERROR]"  << RESET << std::endl;
    std::cout << RED << "That's it ! Let's settle this in a NBA2K game, i will win because i will play with Lebron ! Get ready to lose !" << std::endl;
    std::cout << RESET << std::endl;
}