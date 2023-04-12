/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <ylabbe@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:08:11 by ylabbe            #+#    #+#             */
/*   Updated: 2023/04/12 13:08:11 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/* input.empty = contains a value or not */
void    Contact::showContact(int index) const
{
    if (!_firstName.empty() && !_lastName.empty() && !_nickname.empty() && !_phoneNumber.empty() && !_darkestSecret.empty())
    {
        std::cout << std::endl;
        std::cout << "*----------------------------------------------------------------->" << std::endl;
        std::cout << "* Contact Information [ " << index <<  " ]" << std::endl;
        std::cout << "*----------------------------------------------------------------->" << std::endl;
        std::cout << "*  First Name     | " << this->_firstName << std::endl;
        std::cout << "*  Last Name      | " << this->_lastName << std::endl;
        std::cout << "*  Nickname       | " << this->_nickname << std::endl;
        std::cout << "*  Phone Number   | " << this->_phoneNumber << std::endl;
        std::cout << "*  Darkest Secret | " << this->_darkestSecret << std::endl;
        std::cout << "*----------------------------------------------------------------->" << std::endl;
        std::cout << std::endl;
    }
    else
    {
        return ;
    }
}

/* std::setw(10) = max length */
/* std::flush = ensuring that text is immediately displayed on the screen */
void    Contact::savedInformation(int index) const
{
    if (!_firstName.empty() && !_lastName.empty() && !_nickname.empty() && !_phoneNumber.empty() && !_darkestSecret.empty())
    {
        std::cout << "|" << std::setw(10) << index << std::flush;
        std::cout << "|" << std::setw(10) << this->_maxLength(this->_firstName) << std::flush;
        std::cout << "|" << std::setw(10) << this->_maxLength(this->_lastName) << std::flush;
        std::cout << "|" << std::setw(10) << this->_maxLength(this->_nickname) << std::flush;
        std::cout << "|" << std::endl;
    }
    else
    {
        return ;
    }
}

/* std::getLine = read line of text from standard input (line should be read / where the line read will be stored) */
/* input.empty = contains a value or not */
std::string Contact::_input(std::string str) const
{
    std::string input;
    
    while (true)
    {
        if (std::cin.eof())
            exit(0);
        std::cout << str;
        std::getline(std::cin, input);
        if (std::cin && !input.empty())
        {
            break;
        }
        std::cout << "Invalid input. Please try again." << std::endl;
    }
    return (input);
}

/* std::cin.ignore = flush the input stream of any character stored in it, until a specified character is reached */
void    Contact::initialization(void)
{
    std::cin.ignore();
    this->_firstName = this->_input("* First Name: ");
    this->_lastName = this->_input("* Last Name: ");
    this->_nickname = this->_input("* Nickname: ");
    this->_phoneNumber = this->_input("* Phone Number: ");
    this->_darkestSecret = this->_input("* Darkest Secret: ");
    std::cout << std::endl;
}

/* str.length = get number of characters */
std::string Contact::_maxLength(std::string str) const
{
    if (str.length() > 10)
    {
        return (str.substr(0, 9) + ".");
    }
    return (str);
}

void    Contact::index(int index)
{
    this->_index = index;
}

/* Constructor */
Contact::Contact()
{
    return ;
}

/* Destructor */
Contact::~Contact()
{

}
