/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:58:43 by juguerre          #+#    #+#             */
/*   Updated: 2025/03/11 11:58:43 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form {
    private:
        std::string _name;
        bool _signed;
        const size_t _singGrade;
        const size_t _execGrade;

    public:
        Form();
        Form(const Form &f);
        Form(size_t singGrade, size_t execGrade);
        Form(std::string name);
        Form(std::string name, size_t singGrade, size_t execGrade);

        ~Form();

        Form &operator=(const Form &f);

        void toBeSigned(Bureaucrat &signer);

        const std::string getName(void) const;
        const std::string getSigned(void) const;
        bool getIsSigned(void) const;
        int getSignGrade(void) const;
        int getExecGrade(void) const;

        class GradeTooHighException : public std::exception{
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception{
            public:
                virtual const char *what() const throw();
        };

};

std::ostream &operator<<(std::ostream &out, const Form &f);

#endif