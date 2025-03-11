/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 17:22:54 by juguerre          #+#    #+#             */
/*   Updated: 2025/03/07 17:22:54 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat{
    private:
        std::string _name;
        size_t _grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string name, size_t grade);
        Bureaucrat(const Bureaucrat &b);
        Bureaucrat(std::string name);
        Bureaucrat(size_t grade);
        
        ~Bureaucrat();
        
        Bureaucrat &operator=(const Bureaucrat &b);

        void incrementGrade(void);
        void decrementGrade(void);

        void setGrade(size_t grade);
        void setName(std::string name);
        const std::string getName(void) const;
        size_t getGrade(void) const;

        class GradeTooHighException : public std::exception{
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception{
            public:
                virtual const char *what() const throw();
        };

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);

#endif