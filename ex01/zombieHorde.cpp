/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:02:46 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/10 13:16:08 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
    Zombie *zombieHorde = new Zombie[n]();
    for (int i = 0; i < n; i++)
       zombieHorde[i].set_name(name);
    return(zombieHorde);    
}