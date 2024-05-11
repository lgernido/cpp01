/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 12:21:28 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/11 13:12:54 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl goat_debate;
    goat_debate.complain("debug");
    goat_debate.complain("infos");
    goat_debate.complain("warning");
    goat_debate.complain("error");
    goat_debate.complain("agree");

    return (0);
}