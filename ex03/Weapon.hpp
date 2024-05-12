/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:37:14 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/12 13:42:53 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
    public :
        Weapon(std::string type);
        ~Weapon();
        std::string const &getType(void) const;
        void setType(std::string type);
    
    private :
        std::string type;
};


#endif