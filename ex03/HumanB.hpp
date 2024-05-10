/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:37:09 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/10 15:27:57 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
    public :
        HumanB(std::string name);
        ~HumanB();
        void attack(void);
        void setWeapon(Weapon *Weapon);
    
    private :
        std::string name;
        Weapon *Weapon;
};

#endif