/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <ylabbe@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:08:24 by ylabbe            #+#    #+#             */
/*   Updated: 2023/04/12 13:08:25 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::openingPrompt(void) const
{
    std::cout << std::endl;
    std::cout << "*----------------------------------------------*" << std::endl;
    std::cout << "*  Welcome to your little phone book!          *" << std::endl;
    std::cout << "*  You have three options.                     *" << std::endl;
    std::cout << "*  - ADD: Added a new contact.                 *" << std::endl;
    std::cout << "*  - SEARCH: Find a previously saved contact.  *" << std::endl;
    std::cout << "*  - EXIT: Exit the phone book.                *" << std::endl;
    std::cout << "*----------------------------------------------*" << std::endl;
    std::cout << std::endl;
}

void    PhoneBook::displayContact(void) const
{
    size_t  index;
    
    index = 0;
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
    while (index < 8)
    {
        this->_contactInformation[index].savedInformation(index);
        index++;
    }
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << std::endl;
}

/* std::cin.fail() = determine if an input operation has failed */
/* std::cin.clear() = resets the state of cin, to continue entering data without previous errors blocking */
/* std::cin.ignore() = specifies that the maximum number of characters to skip is the max possible value for streamsize */
int PhoneBook::_displayContactInformation() const
{
    int index;

    while (true)
    {
        if (std::cin.eof())
            exit(0);
        std::cout << "Enter the contact's number to display it: ";
        std::cin >> index;
        if (std::cin.fail() || index < 0 || index > 8)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "This index number does not exist. Try again. Or write 8 for quit" << std::endl;
        }
        else
        {
            return (index);
        }
    }
}

void    PhoneBook::commandAdd(void)
{
    static int  index;
    this->_contactInformation[index % 8].initialization();
    this->_contactInformation[index % 8].index(index % 8);
    index++;
}

void    PhoneBook::commandSearch(void) const
{
    int index;

    index = this->_displayContactInformation();
    this->_contactInformation[index].showContact(index);
}

/* Constructor */
PhoneBook::PhoneBook()
{
    return ;
}

/* Destructor */
PhoneBook::~PhoneBook()
{
    return ;
}
