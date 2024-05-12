/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:37:15 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/12 11:10:06 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : Weapon(NULL)
{
    this->name = name;
    return;
}

HumanB::~HumanB()
{
    return ; 
}

void HumanB::attack(void)
{
    std::cout << MAGENTA << BOLD << this->name << \
    RESET << MAGENTA << " attacks with their " << \
    UNDERLINE << this->Weapon->getType() << RESET << std::endl;
}

void HumanB::setWeapon(class Weapon &Weapon)
{
    this->Weapon = &Weapon;
}