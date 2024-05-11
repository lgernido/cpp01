/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 12:21:28 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/11 14:04:11 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Harl goat_debate;   
        goat_debate.complain(argv[1]);
    }
    else
    {
        std::cout << "Arguments error" << std::endl;
        std::cout << "Correct syntax : ./HarlFilter complain_level" << std::endl;        
    }
    return (0);
}