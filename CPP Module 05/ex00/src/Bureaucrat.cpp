/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 17:49:07 by juguerre          #+#    #+#             */
/*   Updated: 2025/03/07 17:49:07 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("default"), _grade(150){
    std::cout << _name << " is created with a grade of " << _grade << std::endl;
    this->setName("default");
    this->setGrade(150);
};

Bureaucrat::Bureaucrat(std::string name, size_t grade){
    std::cout << name << " is created with a grade of " << grade << std::endl;
    this->setName(name);
    this->setGrade(grade);
};

Bureaucrat::Bureaucrat(const Bureaucrat &b){
    *this = b;
};

Bureaucrat::Bureaucrat(std::string name): _name(name), _grade(150){
    std::cout << _name << " is created with a grade of " << _grade << std::endl;
    this->setName(name);
};

Bureaucrat::Bureaucrat(size_t grade): _name("default"){
    std::cout << _name << " is created with a grade of " << grade << std::endl;
    this->setGrade(grade);
};

Bureaucrat::~Bureaucrat(){
    std::cout << _name << " is destroyed" << std::endl;
};

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b){
    this->_name = b.getName();
    this->_grade = b.getGrade();
    return *this;
};

void	Bureaucrat::incrementGrade(void){
        std::cout << "Trying to increment grade of " << this->getName() << std::endl;
		this->setGrade(this->_grade - 1);
};

void	Bureaucrat::decrementGrade(void){
        std::cout << "Trying to decrement grade of " << this->getName() << std::endl;
        this->setGrade(this->_grade + 1);
};

void	Bureaucrat::setGrade(size_t grade){
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
};

void	Bureaucrat::setName(std::string name){
    this->_name = name;
};

const std::string Bureaucrat::getName(void) const{
    return this->_name;
};

size_t Bureaucrat::getGrade(void) const{
    return this->_grade;
};

const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade is too high";
};

const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade is too low";
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b){
    out << b.getName() << ", bureaucrat grade " << b.getGrade();
    return out;
};
