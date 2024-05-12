/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 08:49:40 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/12 11:39:08 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{
   std::cout << "I am a hungry zombie" << std::endl; 
   return ; 
}

Zombie::Zombie(std::string const name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << RED << BOLD << this->get_name() << \
    RESET << RED << " is dead" << RESET << std::endl;
    return ;
}

std::string Zombie::get_name(void)
{
    return(this->name);
}

void Zombie::announce(void)
{
    std::cout << GREEN << BOLD << this->get_name() << \
    RESET << GREEN << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}