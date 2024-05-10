/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:37:15 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/10 15:28:34 by lgernido         ###   ########.fr       */
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
    std::cout << this->name << " attacks with " << this->Weapon->getType() << std::endl;
}

void HumanB::setWeapon(class Weapon *Weapon)
{
    this->Weapon = Weapon;
}