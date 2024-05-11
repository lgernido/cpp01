/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 12:21:49 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/11 13:13:55 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
    public : 
        Harl();
        ~Harl();
        void complain(std::string level);

    private :
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};

typedef void (Harl::*function_ptr)(void);

#endif