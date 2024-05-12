/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 12:21:28 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/12 11:20:42 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
        Harl goat_debate;
    { 
        goat_debate.complain("debug");
        goat_debate.complain("info");
        goat_debate.complain("warning");
        goat_debate.complain("error");
        goat_debate.complain("agree");
    }
    {
        goat_debate.complain("error");
    }
    {
        goat_debate.complain("warning");
        goat_debate.complain("info");
    }

    return (0);
}