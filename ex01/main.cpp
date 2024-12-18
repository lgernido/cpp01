/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:01:50 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/12 09:35:27 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name);

int main(void)
{
    {
        Zombie *Horde = NULL;
        Horde = zombieHorde(5, "Michael");
        for (int i = 0; i < 5; i++)
            Horde[i].announce();
        delete[] Horde;
    }
    {
        Zombie *Horde = NULL;
        Horde = zombieHorde(1, "Kobe");
        for (int i = 0; i < 1; i++)
            Horde[i].announce();
        delete[] Horde;
    }
    // {
    //     Zombie *Horde = NULL;
    //     Horde = zombieHorde(100, "Lebron");
    //     for (int i = 0; i < 100; i++)
    //         Horde[i].announce();
    //     delete[] Horde;
    // }
    return (0);
}