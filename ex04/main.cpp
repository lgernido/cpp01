/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 10:07:18 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/11 11:37:36 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Incorrect number of arguments" << std::endl;
        std::cerr << "Correct syntax : ./sed filename string_to_find string_replacement" << std::endl;
        exit(EXIT_FAILURE);
    }
    else
    {
        std::string filename = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        std::string content;
        std::string line;
        size_t position_in_string;
        
        std::ifstream original_file(filename.c_str()); 
        if(original_file.is_open())
        {
            while(std::getline(original_file, line))
            {
                content += line;
            }
            original_file.close();
            position_in_string = content.find(s1);
            while(position_in_string < content.length())
            {
                content.erase(position_in_string, s1.length());
                content.insert(position_in_string, s2);
                position_in_string = content.find(s1, position_in_string + s2.length());
                
            }
            std::ofstream replacing_file((filename + ".replace").c_str());
            replacing_file << content;
            replacing_file.close();
        }
        else
        {
            std::cerr << "Failed to open the original file." << std::endl;
            return (EXIT_FAILURE);
        }
    }

    return 0;
}
