/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 17:47:42 by juguerre          #+#    #+#             */
/*   Updated: 2025/03/07 17:47:42 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    {
        std::cout << "\033[34mConstructing\033[0m" << std::endl;
        Bureaucrat *a = new Bureaucrat();
        std::cout << std::endl;

        std::cout << "\033[34mTesting\033[0m" << std::endl;
        std::cout << a << std::endl;

        try
        {
            a->incrementGrade();
        }
        catch (Bureaucrat::GradeTooHighException &e)
        {
            std::cerr << "\033[33mIncrementing grade of " << a->getName() << " failed: " << e.what() << "\033[0m" << std::endl;
        }

        std::cout << a << std::endl;

        try
        {
            a->decrementGrade();
        }
        catch (Bureaucrat::GradeTooLowException &e)
        {
            std::cerr << "\033[33mDecrementing grade of " << a->getName() << " failed: " << e.what() << "\033[0m" << std::endl;
        }

        std::cout << a << std::endl;

        try
        {
            a->decrementGrade();
        }
        catch (Bureaucrat::GradeTooLowException &e)
        {
            std::cerr << "\033[33mDecrementing grade of " << a->getName() << " failed: " << e.what() << "\033[0m" << std::endl;
        }

        std::cout << a << std::endl;
        std::cout << std::endl;

        std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
        delete a;
        std::cout << std::endl;
    }
    std::cout << "-------------------------------------------------------" << std::endl;
    {
        std::cout << std::endl;
        std::cout << "\033[34mConstructing\033[0m" << std::endl;
        Bureaucrat *a = new Bureaucrat(1);
        std::cout << std::endl;
        std::cout << "\033[34mTesting\033[0m" << std::endl;
        std::cout << a << std::endl;

        try
        {
            a->decrementGrade();
        }
        catch (Bureaucrat::GradeTooLowException &e)
        {
            std::cerr << "\033[33mDecrementing grade of " << a->getName() << " failed: " << e.what() << "\033[0m" << std::endl;
        }

        std::cout << a << std::endl;

        try
        {
            a->incrementGrade();
        }
        catch (Bureaucrat::GradeTooHighException &e)
        {
            std::cerr << "\033[33mIncrementing grade of " << a->getName() << " failed: " << e.what() << "\033[0m" << std::endl;
        }

        std::cout << a << std::endl;

        try
        {
            a->incrementGrade();
        }
        catch (Bureaucrat::GradeTooHighException &e)
        {
            std::cerr << "\033[33mIncrementing grade of " << a->getName() << " failed: " << e.what() << "\033[0m" << std::endl;
        }

        std::cout << a << std::endl;
        std::cout << std::endl;

        std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
        delete a;
        std::cout << std::endl;
    }
    std::cout << "-------------------------------------------------------" << std::endl;
    {
        std::cout << std::endl;
        std::cout << "\033[34mConstructing\033[0m" << std::endl;
        Bureaucrat *a = NULL;

        try
        {
            a = new Bureaucrat(0);
        }
        catch (Bureaucrat::GradeTooHighException &e)
        {
            std::cerr << "\033[33mConstructing default failed: " << e.what() << "\033[0m" << std::endl;
        }

        if (a != NULL)
        {
            std::cout << std::endl;

            std::cout << "\033[34mDeconstructing b\033[0m" << std::endl;
            delete a;
        }

        std::cout << std::endl;
    }
    std::cout << "-------------------------------------------------------" << std::endl;
    {
        std::cout << std::endl;
        std::cout << "\033[34mConstructing\033[0m" << std::endl;
        Bureaucrat *a = NULL;

        try
        {
            a = new Bureaucrat(160);
        }
        catch (Bureaucrat::GradeTooLowException &e)
        {
            std::cerr << "\033[33mConstructing default failed: " << e.what() << "\033[0m" << std::endl;
        }

        if (a != NULL)
        {
            std::cout << std::endl;
            std::cout << "\033[34mDeconstructing b\033[0m" << std::endl;
            delete a;
        }
        std::cout << std::endl;
    }
    std::cout << "-------------------------------------------------------" << std::endl;
    {
        std::cout << std::endl;
        std::cout << "\033[34mConstructing\033[0m" << std::endl;
        Bureaucrat *a = new Bureaucrat("Peter", 120);
        std::cout << std::endl;

        std::cout << "\033[34mTesting a\033[0m" << std::endl;
        std::cout << a << std::endl;

        a->decrementGrade();

        std::cout << a << std::endl;
        std::cout << std::endl;

        std::cout << "\033[34mConstructing b\033[0m" << std::endl;
        Bureaucrat *b = new Bureaucrat(*a);
        std::cout << std::endl;

        std::cout << "\033[34mDeconstructing a\033[0m" << std::endl;
        delete a;
        std::cout << std::endl;

        std::cout << "\033[34mTesting b\033[0m" << std::endl;
        std::cout << b << std::endl;
        b->decrementGrade();
        std::cout << "Name: " << b->getName() << std::endl;
        std::cout << "Grade: " << b->getGrade() << std::endl;
        std::cout << b;
        std::cout << std::endl;

        std::cout << "\033[34mDeconstructing b\033[0m" << std::endl;
        delete b;

        std::cout << std::endl;
    }
}