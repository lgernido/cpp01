/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 08:49:42 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/10 11:57:42 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name);
Zombie *newZombie(std:: string name);

int main(void)
{
    Zombie *first_zombie = NULL;
    first_zombie = newZombie("Lebron");
    delete first_zombie;

    randomChump("Kobe");
    return (0);
}