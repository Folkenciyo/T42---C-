/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:49:13 by juguerre          #+#    #+#             */
/*   Updated: 2024/09/17 19:57:37 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int replace_string(std::ofstream file_out, std::string &buffer, std::string s1, std::string s2)
{
    std::size_t pos;
    std::size_t toSkip;
    
    pos = s2.find(s1);
    if(pos == std::string::npos)
    {
        std::cout << "Error: string not found" << std::endl;
        return (1);
    }
    else
    {
        file_out << s2.substr(0, pos);
        
    }
    
}

int main(int argc, char **argv)
{
    std::ifstream file_in;
    std::ofstream file_out;
    std::string s1;
    std::string s2;
    std::string buffer;
    std::string filename;
    std::string replace;

    if (argc != 4)
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return (1);
    }
    filename = argv[1];
    s1 = argv[2];    
    s2 = argv[3];
    file_in.open(filename);
    if (file_in.fail())
    {
        std::cout << "Error: file not found" << std::endl;
        return (1);
    }
    replace = filename + ".replace";
    file_out.open(replace.c_str());
    if (file_out.fail())
    {
        std::cout << "Error: file not found" << std::endl;
        return (1);
    }
    while (getline(file_in, buffer))
    {
        replace_string(file_out, buffer, s1, s2);
    }
    
    
    
    return (0);
}