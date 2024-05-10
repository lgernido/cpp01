/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 08:49:33 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/10 10:26:14 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
    public :
        Zombie();
        Zombie(std::string const name);
        ~Zombie();
        void announce(void);

    private : 
        std::string name;
        std::string get_name(void);
};

#endif