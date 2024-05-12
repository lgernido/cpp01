/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 08:49:40 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/12 09:44:19 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{
   return ; 
}

Zombie::Zombie(std::string const name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << RED << this->get_name() << " is dead" << RESET << std::endl;
    return ;
}

std::string Zombie::get_name(void)
{
    return(this->name);
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}

void Zombie::announce(void)
{
    std::cout << GREEN << this->get_name() << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}