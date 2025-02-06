/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:15:51 by juguerre          #+#    #+#             */
/*   Updated: 2025/02/04 17:15:51 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <unistd.h>

typedef std::string str;

class Brain{
    public:
        Brain();
        Brain(Brain const &src);
        ~Brain();

        Brain &	operator=(Brain const &rSym);

        str getRandomIdea() const;
    private:
        str _ideas[100];
};


#endif