/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:37:19 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/12 13:42:58 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
    return;
}

Weapon::~Weapon()
{
    return;
}

std::string const& Weapon::getType(void) const
{
    return(this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}