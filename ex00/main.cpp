/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 08:49:42 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/12 09:50:17 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name);
Zombie *newZombie(std:: string name);

int main(void)
{
    Zombie *first_zombie = NULL;
    Zombie *second_zombie = NULL;
    Zombie *third_zombie = NULL;
    first_zombie = newZombie("Lebron");
    second_zombie = newZombie("Kyrie");
    delete first_zombie;

    randomChump("Kobe");
    third_zombie = newZombie("Carmelo");
    randomChump("Michael");
    second_zombie->announce();
    randomChump("Dennis");
    third_zombie->announce();
    delete second_zombie;
    delete third_zombie;

    return (0);
}