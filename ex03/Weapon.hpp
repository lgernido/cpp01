/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:37:14 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/12 10:58:11 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
    public :
        Weapon();
        ~Weapon();
        Weapon(std::string type);
        std::string const &getType(void) const;
        void setType(std::string type);
    
    private :
        std::string type;
};


#endif