/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:37:11 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/10 15:17:09 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
    public :
        ~HumanA();
        HumanA(std::string name, Weapon &weapon);
        void attack(void);
    
    private :
        Weapon &weapon;
        std::string name;
};

#endif