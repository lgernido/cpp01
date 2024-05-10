/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 08:49:40 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/10 10:24:31 by lgernido         ###   ########.fr       */
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
    std::cout << this->get_name() << " is dead" << std::endl;
    return ;
}

std::string Zombie::get_name(void)
{
    return(this->name);
}

void Zombie::announce(void)
{
    std::cout << this->get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}